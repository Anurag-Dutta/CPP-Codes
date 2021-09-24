/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-29 04:11:50
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
void fun(string str, char ch, int count)
{
    if (str.size() == 0)
    {
        for (int i = 0; i < count; i++)
        {
            cout << ch;
        }
        return;
    }
    else
    {
        if (str[0] == ch)
        {
            count++;
            fun(str.substr(1), ch, count);
        }
        else
        {
            cout << str[0];
            fun(str.substr(1), ch, count);
        }
    }
}
int main()
{
    string str;
    getline(cin, str);
    char ch;
    cin >> ch;
    fun(str, ch, 0);
    getch();
    return 0;
}
