/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-29 01:01:37
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int fun(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + fun(n - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    cout << fun(n) << endl;
    getch();
    return 0;
}