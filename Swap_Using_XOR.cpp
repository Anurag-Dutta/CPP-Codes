/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-02 11:31:41
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int num1, num2;
    cin >> num1;
    cin >> num2;
    num1 = num1 ^ num2;
    num2 = num2 ^ num1;
    num1 = num2 ^ num1;
    cout << num1 << " " << num2 << endl;
    getch();
    return 0;
}