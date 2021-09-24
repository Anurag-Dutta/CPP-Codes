/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-29 01:07:09
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int fun(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    else
    {
        return n * fun(n, p - 1);
    }
}
int main()
{
    int n, p;
    cin >> n >> p;
    cout << fun(n, p);
    getch();
    return 0;
}
