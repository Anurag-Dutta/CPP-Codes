/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-29 01:11:40
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int fun(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fun(n - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    cout << fun(n);
    getch();
    return 0;
}
#define FOR(i, a, b) for (int i = a; i <= b; i++)