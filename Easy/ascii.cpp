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
    int L;
    cin >> L;
    cin.ignore();
    int H;
    cin >> H;
    cin.ignore();
    string T;
    getline(cin, T);

    string strArr[50][27];

    for (int i = 0; i < H; i++)
    {
        string ROW;
        getline(cin, ROW);

        for (int j = 0; j < 27; j++)
        {
            strArr[i][j] = ROW.substr(j * L, L);
        }
    }

    char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ?";
    transform(T.begin(), T.end(), T.begin(), ::toupper);

    //TODO: Uppercase

    string output[1000];

    //TODO: Find type in array

    for (int k = 0; k < T.length(); k++)
    {
        int arrflag = -1;

        for (int i = 0; i < 27; ++i)
        {
            if (ch[i] == T[k])
                arrflag = i;
        }

        if (arrflag == -1)
        {
            for (int l = 0; l < H; l++)
            {
                output[l] += strArr[l][26];
            }
        }
        else
        {
            if (T.length() == 1)
            {
                for (int l = 0; l < H; l++)
                {
                    output[l] += strArr[l][arrflag];
                }
            }
            else
            {
                for (int l = 0; l < H; l++)
                {
                    output[l] += strArr[l][arrflag];
                }
            }
        }
    }

    for (int l = 0; l < H; l++)
    {
        cout << output[l] << endl;
    }
}