#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    string MESSAGE;
    getline(cin, MESSAGE);

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    string binstr;
    int flag = 1, k = 0;

    for (int i = 0; i < MESSAGE.length(); ++i)
    {

        bitset<7> bset1((int)MESSAGE[i]);

        binstr += bset1.to_string();
    }

    while (k < binstr.length())
    {
        if (binstr[k] == '0')
        {
            cout << "00 ";
            for (; k < binstr.length() && binstr[k] == '0'; ++k)
            {
                cout << "0";
            }
            if (k < binstr.length())
            {
                cout << " ";
            }
        }
        else
        {
            cout << "0 ";
            for (; k < binstr.length() && binstr[k] == '1'; ++k)
            {
                cout << "0";
            }

            if (k < binstr.length())
                cout << " ";
        }
    }
}