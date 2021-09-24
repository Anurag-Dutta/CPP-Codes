/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-16 11:53:58
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    vector<pair<int, char>> v;
    for (int i = 0; i < 26; i++)
    {
        v.push_back(make_pair(i + 1, 65 + i));
    }
    for (auto i : v)
    {
        cout << i.first << " " << i.second << endl;
    }
    getch();
    return 0;
}
