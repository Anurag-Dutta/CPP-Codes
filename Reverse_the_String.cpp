/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-29 04:00:50
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
void fun(string str)
{
    if (str.size() == 0)
    {
        return;
    }
    else
    {
        char ch = str[0];
        fun(str.substr(1));
        cout << ch << " ";
    }
}
int main()
{
    string str;
    cin >> str;
    fun(str);
    getch();
    return 0;
}
