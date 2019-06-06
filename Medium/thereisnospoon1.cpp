#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

/**
 * Don't let the machines win. You are humanity's last hope...
 **/

void FindNeigh(int x, int y, int h, int w, char **arr);

int main()
{
    int width; // the number of cells on the X axis
    cin >> width;
    cin.ignore();
    int height; // the number of cells on the Y axis
    cin >> height;
    cin.ignore();

    cerr << "W " << width << "H " << height << endl;

    char *arr[30];

    for (int i = 0; i < height; i++)
    {
        string line; // width characters, each either 0 or .
        getline(cin, line);
        // cout<<"Line "<<line<<endl;

        arr[i] = (char *)malloc(sizeof(char) * width);

        for (int j = 0; j < width; j++)
        {
            arr[i][j] = line[j];
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            if (arr[i][j] == '.')
            {
                continue;
            }
            FindNeigh(j, i, height, width, arr);
        }
    }
}

void FindNeigh(int x, int y, int h, int w, char **arr)
{
    int x0 = x;
    int y0 = y;
    int x1 = -1, y1 = -1, x2 = -1, y2 = -1;

    for (int i = x + 1; i < w; i++)
    {
        if (arr[y][i] == '0')
        {
            x1 = i;
            y1 = y;
            break;
        }
    }

    for (int j = y + 1; j < h; j++)
    {
        if (arr[j][x] == '0')
        {
            x2 = x;
            y2 = j;
            break;
        }
    }

    cout << x0 << " " << y0 << " " << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
}
