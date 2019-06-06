#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool findnegative(int array[], int size);

bool findnegative(int array[], int size)
{
    int negcount = 0;
    for (int i = 0; i < size; ++i)
    {
        if (array[i] < 0)
        {
            negcount++;
        }
        cerr << "negcount" << negcount;
    }

    return negcount == size ? true : false;
}

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int n; // the number of temperatures to analyse
    int min, flag = 0, smallestd, currentd;
    int tarray[1000];

    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t;
        cin.ignore();
        tarray[i] = t;
    }
    bool a = findnegative(tarray, n);
    smallestd = abs(tarray[0]);

    for (int j = 1; j < n; ++j)
    {
        currentd = abs(tarray[j]);
        if (a == true && currentd < smallestd)
        {
            smallestd = currentd;
            flag = j;
        }

        if (currentd < smallestd && tarray[j] > 0)
        {
            smallestd = currentd;
            flag = j;
        }
    }
    if (n == 0)
    {
        cout << 0 << endl;
    }

    else
    {
        cout << tarray[flag] << endl;
    }
}