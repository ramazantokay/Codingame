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
    int nbFloors;              // number of floors
    int width;                 // width of the area
    int nbRounds;              // maximum number of rounds
    int exitFloor;             // floor on which the exit is found
    int exitPos;               // position of the exit on its floor
    int nbTotalClones;         // number of generated clones
    int nbAdditionalElevators; // ignore (always zero)
    int nbElevators;           // number of elevators

    int arrfloor[nbElevators + 1];

    cin >> nbFloors >> width >> nbRounds >> exitFloor >> exitPos >> nbTotalClones >> nbAdditionalElevators >> nbElevators;
    cin.ignore();
    for (int i = 0; i < nbElevators; i++)
    {
        int elevatorFloor; // floor on which this elevator is found
        int elevatorPos;   // position of the elevator on its floor
        cin >> elevatorFloor >> elevatorPos;
        cin.ignore();
        arrfloor[elevatorFloor] = elevatorPos;
    }
    arrfloor[exitFloor] = exitPos;

    // game loop
    while (1)
    {
        int cloneFloor;   // floor of the leading clone
        int clonePos;     // position of the leading clone on its floor
        string direction; // direction of the leading clone: LEFT or RIGHT
        cin >> cloneFloor >> clonePos >> direction;
        cin.ignore();
        cerr << "Clone Pos" << clonePos << endl;
        cerr << "Exit Pos" << exitPos << endl;

        if (clonePos > arrfloor[cloneFloor] && direction == "RIGHT" || clonePos < arrfloor[cloneFloor] && direction == "LEFT")
        {
            cout << "BLOCK" << endl; 
        }
        else if (arrfloor[cloneFloor] == 0)
        {
            cout << "WAIT" << endl;
        }
        else
        {
            cout << "WAIT" << endl; 
        }

        //cerr<< "clone pos"<<clonePos;
        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
    }
}