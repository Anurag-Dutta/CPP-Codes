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
    string s, c;
    c = "";
    cout << "Enter the string : ";
    cin >> s;
    fun(s, c);
    getch();
    return 0;
}