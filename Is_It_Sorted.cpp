/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-29 01:41:18
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
bool fun(vector<int> v, int n)
{
    if (n == 1)
    {
        return true;
    }
    if (v[0] < v[1])
    {
        v.erase(v.begin());
        if (fun(v, n - 1) == true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    if (fun(v, n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    getch();
    return 0;
}