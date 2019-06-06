#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int W; // number of columns.
    int H; // number of rows.
    cin >> W >> H;
    cin.ignore();
    int arr[H][W];
    for (int i = 0; i < H; i++)
    {
        string LINE; // represents a line in the grid and contains W integers. Each integer represents one room of a given type.
        getline(cin, LINE);
        cerr << "Lıne " << LINE << endl;

        stringstream stream(LINE);

        for (int j = 0; j < W; j++)
        {
            string auth;
            stream >> auth;
            arr[i][j] = stoi(auth);
        }
    }
    cerr << "W " << W << "H " << H << endl;
    int EX; // the coordinate along the X axis of the exit (not useful for this first mission, but must be read).
    cin >> EX;
    cin.ignore();

    // game loop
    while (1)
    {
        int XI;
        int YI;
        string POS;
        cin >> XI >> YI >> POS;
        cin.ignore();
        cerr << "XI " << XI << "YI " << YI << "POS " << POS << endl;

        cerr << "Array " << arr[XI][YI] << endl;

        //@TODO : Implement switch-case instead of if loops

        if (arr[YI][XI] == 1)
        {
            YI += 1;
        }
        else if (arr[YI][XI] == 2 && POS == "LEFT")
        {
            XI += 1;
        }
        else if (arr[YI][XI] == 2 && POS == "RIGHT")
        {
            XI -= 1;
        }
        else if (arr[YI][XI] == 3)
        {
            YI += 1;
        }

        else if (arr[YI][XI] == 4 && POS == "TOP")
        {
            XI -= 1;
        }

        else if (arr[YI][XI] == 4 && POS == "RIGHT")
        {
            YI += 1;
        }

        else if (arr[YI][XI] == 5 && POS == "TOP")
        {
            XI += 1;
        }

        else if (arr[YI][XI] == 5 && POS == "LEFT")
        {
            YI += 1;
        }

        else if (arr[YI][XI] == 6 && POS == "LEFT")
        {
            XI += 1;
        }

        else if (arr[YI][XI] == 6 && POS == "RIGHT")
        {
            XI -= 1;
        }

        else if (arr[YI][XI] == 7)
        {
            YI += 1;
        }
        else if (arr[YI][XI] == 8)
        {
            YI += 1;
        }
        else if (arr[YI][XI] == 9)
        {
            YI += 1;
        }
        else if (arr[YI][XI] == 10)
        {
            XI -= 1;
        }
        else if (arr[YI][XI] == 11)
        {
            XI += 1;
        }
        else if (arr[YI][XI] == 12)
        {
            YI += 1;
        }
        else if (arr[YI][XI] == 13)
        {
            YI += 1;
        }

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        // One line containing the X Y coordinates of the room in which you believe Indy will be on the next turn.
        cout << XI << " " << YI << endl;
    }
}