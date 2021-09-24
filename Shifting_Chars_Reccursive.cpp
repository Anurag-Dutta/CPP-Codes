#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
extern string s1 = "";
void fun(string str, char ch)
{
    if (str.size() == 0)
    {
        cout << s1;
        return;
    }
    if (str[0] == ch)
    {
        s1 += ch;
        string res = str.substr(1);
        fun(res, ch);
    }
    else
    {
        cout << str[0];
        string res = str.substr(1);
        fun(res, ch);
    }
}
int main()
{
    string s;
    char c;
    cout << "Enter the string : ";
    cin >> s;
    cout << "\nEnter the character : ";
    cin >> c;
    fun(s, c);
    getch();
    return 0;
}