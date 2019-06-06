#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int dot_finder(string a);

int main()
{
    int N; // Number of elements which make up the association table.
    cin >> N;
    cin.ignore();
    int Q; // Number Q of file names to be analyzed.
    cin >> Q;
    cin.ignore();

    map<string, string> r_map;

    for (int i = 0; i < N; i++)
    {
        string EXT; // file extension
        string MT;  // MIME type.
        cin >> EXT >> MT;
        cin.ignore();

        transform(EXT.begin(), EXT.end(), EXT.begin(), ::tolower);

        r_map.insert(pair<string, string>(EXT, MT));
    }
    for (int i = 0; i < Q; i++)
    {
        string FNAME, extension; // One file name per line.
        getline(cin, FNAME);
        transform(FNAME.begin(), FNAME.end(), FNAME.begin(), ::tolower);

        int flag = 0;

        int find_num = dot_finder(FNAME);

        if (find_num == -1)
        {
            cout << "UNKNOWN" << endl;
        }
        else
        {
            flag = find_num + 1;
            for (; flag < FNAME.length(); flag++)
            {
                extension += FNAME[flag];
            }

            if (r_map.find(extension) == r_map.end())
            {
                cout << "UNKNOWN" << endl;
            }
            else
            {
                cout << r_map.find(extension)->second << endl;
            }
        }
    }
}

int dot_finder(string a)
{
    int flag = -1;
    for (int i = 0; i < a.length(); i++)
    {

        a[i] == '.' ? flag = i : i;
    }

    return flag;
}