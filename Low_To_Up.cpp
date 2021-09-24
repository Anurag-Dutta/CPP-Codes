/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-01 22:26:48
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    char ch;
    cin >> ch;
    cout << (char)(ch | (1 << 5)) << endl; //UP->LOW
    ch = ch | (1 << 5);
    cout << (char)(ch & ~(1 << 5)) << endl; //LOW->UP
    getch();
    return 0;
}
