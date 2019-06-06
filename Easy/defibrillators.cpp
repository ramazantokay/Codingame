#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{

    vector<string> local;
    vector<float> dist;

    float fLat, fLon, fMin = 100, x, y;
    string LON;
    cin >> LON;
    cin.ignore();
    string LAT;
    cin >> LAT;
    cin.ignore();
    int N, flag = 0, j = 0;
    cin >> N;
    cin.ignore();
    replace(LON.begin(), LON.end(), ',', '.');
    replace(LAT.begin(), LAT.end(), ',', '.');

    for (int i = 0; i < N; i++)
    {
        string DEFIB, key;

        getline(cin, DEFIB);

        replace(DEFIB.begin(), DEFIB.end(), ',', '.');
        stringstream stream(DEFIB);
        int numero = 0;
        while (getline(stream, key, ';'))
        {
            if (numero == 1)
            {
                local.push_back(key);
                cerr << "Keyy  " << key << endl;
            }
            else if (numero == 4)
            {
                fLon = stof(key);
            }
            else if (numero == 5)
            {
                fLat = stof(key);
            }
            numero++;
        }

        x = (fLon - stof(LON)) * cos((fLat + stof(LAT)) / 2);
        y = (fLat - stof(LAT));
        dist.push_back(sqrt((x * x) + (y * y)) * 6371);
    }
    cerr << "Distance " << dist[0] << endl;
    cerr << "Distance " << dist[1] << endl;

    for (; j < dist.size(); j++)
    {
        if (dist[j] < fMin)
        {
            fMin = dist[j];
            flag = j;
        }
    }

    cerr << "flag  " << local[flag] << endl;
    cout << local[flag];
}