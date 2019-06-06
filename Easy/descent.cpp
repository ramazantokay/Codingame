#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    // game loop
    while (1)
    {
        int hmax = 0;
        int flag = 0;

        for (int i = 0; i < 8; i++)
        {
            int mountainH; // represents the height of one mountain.
            cin >> mountainH;
            cin.ignore();
            if (mountainH > hmax)
            {
                hmax = mountainH;
                flag = i;
            }
        }
        cout << flag << endl;

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
    }
}