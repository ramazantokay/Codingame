#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int N;
    cin >> N;
    cin.ignore();

    vector<pair<int, int>> pos;

    for (int i = 0; i < N; i++)
    {
        int X;
        int Y;
        cin >> X >> Y;
        cin.ignore();

        pos.push_back({X, Y});
    }

    sort(pos.begin(), pos.end(), [](pair<int, int> p1, pair<int, int> p2) { return p1.second < p2.second; });
    int CableY;
    if (pos.size() % 2)
    {
        CableY = pos[pos.size() / 2].second;
    }
    else
    {

        CableY = (pos[(pos.size() / 2) - 1].second + pos[pos.size() / 2].second) / 2;
    }

    int PosXmin = numeric_limits<int>::max();
    int PosXmax = numeric_limits<int>::min();

    for (auto p : pos)
    {
        if (p.first < PosXmin)
        {
            PosXmin = p.first;
        }
        if (p.first > PosXmax)
        {
            PosXmax = p.first;
        }
    }

    int minl = PosXmax - PosXmin;
    long totall = minl;
    for (auto p : pos)
    {
        totall += abs(CableY - p.second);
    }

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << totall << endl;
}