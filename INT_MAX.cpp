/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-31 15:37:56
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int k = 31;
    string bin = bitset<32>(1 << k - 1).to_string();
    cout << bin << endl;
    cout << (1 << k) - 1 << endl;
    getch();
    return 0;
}