#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
int main()
{
    int lightX;    // the X position of the light of power
    int lightY;    // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    cin >> lightX >> lightY >> initialTX >> initialTY;
    cin.ignore();

    // game loop
    while (1)
    {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remainingTurns;
        cin.ignore();

        string DirectionX = "";
        string DirectionY = "";

        if (initialTX > lightX)
        {
            DirectionX = "W";
            initialTX--;
        }
        else if (initialTX < lightX)
        {
            DirectionX = "E";
            initialTX++;
        }

        if (initialTY < lightY)
        {
            DirectionY = "S";
            initialTY++;
        }
        else if (initialTY > lightY)
        {
            DirectionY = "N";
            initialTY--;
        }

        cout << DirectionY << DirectionX << endl;
    }
}