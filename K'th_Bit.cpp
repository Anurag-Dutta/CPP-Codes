/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-31 16:06:40
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << string(bitset<32>(n).to_string()) << endl;
    int k;
    cin >> k;
    if ((n & (1 << k)) != 0)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }
    getch();
    return 0;
}
