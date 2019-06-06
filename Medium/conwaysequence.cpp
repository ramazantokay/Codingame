#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <sstream>
#include <cassert>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

string conwayseq(int n, int r);
string add_space(string str);

int main()
{
    int R;
    cin >> R;
    cin.ignore();
    int L;
    cin >> L;
    cin.ignore();
    int i = 0;

    vector<vector<int>> lines(2, vector<int>(1, R));
    for (int l = 2; l <= L; ++l)
    {
        assert(!lines[l - 1].empty());
        int last = numeric_limits<int>::max();
        vector<pair<int, int>> count;
        for (int i = 0; i < lines[l - 1].size(); ++i)
        {
            if (lines[l - 1][i] == last)
            {
                count.back().second++;
            }
            else
            {
                last = lines[l - 1][i];
                count.push_back({lines[l - 1][i], 1});
            }
        }

        lines.push_back({});
        for (int i = 0; i < count.size(); ++i)
        {
            lines[l].push_back(count[i].second);
            lines[l].push_back(count[i].first);
        }
    }

    for (; i < lines.back().size(); ++i)
    {
        if (i + 1 == lines.back().size())
            cout << lines.back()[i] << endl;
        else
            cout << lines.back()[i] << " ";
    }
}

string conwayseq(int n, int r)
{

    if (n == 1)
        return std::to_string(r);
    if (n == 2)
        return "1 " + to_string(r);

    string temp = "1" + to_string(r);

    //cout<<temp<<endl;
    for (int i = 3; i <= n; i++)
    {
        temp += '$';
        int size = temp.length();

        int flag = 1;
        string temp2 = "";

        for (int h = 1; h < size; h++)
        {
            if (temp[h] != temp[h - 1])
            {
                temp2 += to_string(flag);
                temp2 += temp[h - 1];
                //temp2+=" ";

                //                +" "+temp[h-1];
                //  temp2 +=temp[h-1];

                flag = 1;
            }
            else
            {
                flag++;
            }
        }
        temp = temp2;
    }
    return temp;
}

string add_space(string str)
{
    string tempstr;
    for (auto itr : str)
    {
        tempstr += itr;
        tempstr += ' ';
    }
    return tempstr;
}
