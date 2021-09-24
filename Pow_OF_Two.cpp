/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-31 15:49:25
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if ((n & (n - 1)) == 0 && n != 0)
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