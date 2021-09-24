/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-31 16:17:38
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
    n = (n & ~(1 << k));
    cout << string(bitset<32>(n).to_string()) << endl;
    getch();
    return 0;
}
