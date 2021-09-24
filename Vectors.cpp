/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-14 11:13:54
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    vector<int> v;
    int x;
    while (cin >> x)
    {
        v.push_back(x);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    while (v.size() != 0)
    {
        v.pop_back();
    }
    for (auto i : v)
    {
        cout << i << " ";
    }
    getch();
    return 0;
}
