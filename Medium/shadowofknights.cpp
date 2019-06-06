#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int W; // width of the building.
    int H; // height of the building.
    cin >> W >> H;
    cin.ignore();
    int N; // maximum number of turns before game over.
    cin >> N;
    cin.ignore();
    int X0;
    int Y0;
    cin >> X0 >> Y0;
    cin.ignore();
    int minX = 0, minY = 0, maxY = H - 1, maxX = W - 1;
    int tempX, tempY;
    tempX = X0;
    tempY = Y0;
    // game loop
    while (1)
    {
        string bombDir; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        cin >> bombDir;
        cin.ignore();

        if (bombDir == "U")
        {
            maxY = tempY - 1;
            minX = tempX;
            maxX = tempX;
        }
        else if (bombDir == "D")
        {
            minY = tempY + 1;
            minX = tempX;
            maxX = tempX;
        }
        else if (bombDir == "L")
        {
            minX = tempX - 1;
            minY = tempY;
            maxY = tempY;
        }
        else if (bombDir == "R")
        {
            minX = tempX + 1;
            minY = tempY;
            maxY = tempY;
        }
        else if (bombDir == "UR")
        {
            minX = tempX + 1;
            maxY = tempY - 1;
        }
        else if (bombDir == "UL")
        {
            maxX = tempX - 1;
            maxY = tempY - 1;
        }
        else if (bombDir == "DR")
        {
            minY = tempY + 1;
            minX = tempX + 1;
        }
        else if (bombDir == "DL")
        {
            minY = tempY + 1;
            maxX = tempX - 1;
        }

        tempX = (minX + maxX) / 2;
        tempY = (minY + maxY) / 2;



        cout << tempX << " " << tempY << endl;
    }
}