/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-18 24:44:57
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    string str;
    cout << "Enter the sentence : ";
    cin >> str;
    cout << "\nThe reversed sentence will be : ";
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[str.size() - 1 - i];
    }
    getch();
    return 0;
}