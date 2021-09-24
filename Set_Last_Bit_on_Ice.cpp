/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-31 16:29:14
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << string(bitset<32>(n).to_string()) << endl;
    n = (n & (n - 1));
    cout << string(bitset<32>(n).to_string()) << endl;
    getch();
    return 0;
}
