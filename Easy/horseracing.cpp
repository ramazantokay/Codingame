#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
int main()
{
    int N, temp;

    vector<int> arr;

    cin >> N;
    cin.ignore();
    for (int i = 0; i < N; i++)
    {
        int Pi;
        cin >> Pi;
        cin.ignore();
        arr.push_back(Pi);
    }
    sort(arr.begin(), arr.end());
    temp = abs(arr[0] - arr[1]);
    for (int i = 0; i < N; ++i)
    {
        temp = min(temp, arr[i] - arr[i - 1]);
    }
    cout << temp << endl;
}