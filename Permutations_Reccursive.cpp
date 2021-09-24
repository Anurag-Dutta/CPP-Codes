#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
void fun(string str, string ans)
{
    if (str.size() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        string res = str.substr(0, i) + str.substr(i + 1);
        fun(res, ans + ch);
    }
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