#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int arr[100000];

    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        cin.ignore();
        arr[i] = v;
    }

    int flag = 0;
    int tempmax = arr[0];
    int tempmin = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > tempmax)
        {
            tempmax = arr[i];
        }
        else
        {
            tempmin = arr[i];
            if ((tempmax - tempmin) > flag)
            {
                flag = tempmax - tempmin;
            }
        }
    }
    cout << -flag << endl;
}