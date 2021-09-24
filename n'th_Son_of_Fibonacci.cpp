/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-29 01:34:06
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int fun(int n)
{
    if (n == 0 || n == 1 || n == 2)
    {
        return n;
    }
    else
    {
        return fun(n - 1) + fun(n - 2);
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
