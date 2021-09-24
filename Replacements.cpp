/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-29 04:09:17
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
        if (str[0] == 'p' && str[1] == 'i')
        {
            cout << 3.14;
            fun(str.substr(2));
        }
        else
        {
            cout << str[0];
            fun(str.substr(1));
        }
    }
}
int main()
{
    string str;
    getline(cin, str);
    fun(str);
    getch();
    return 0;
}