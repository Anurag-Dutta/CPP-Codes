/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-29 01:41:18
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
void fun(string str, string ans)
{
    char ch = str[0];
    if (str.size() == 0)
    {
        if (ans == "")
        {
            cout << "\"\"" << endl;
        }
        else
        {
            cout << ans << endl;
        }
        return;
    }
    string res = str.substr(1);
    fun(res, ans);
    fun(res, ans + ch);
}
int main()
{
    string s;
    cin >> s;
    fun(s, "");
    getch();
    return 0;
}