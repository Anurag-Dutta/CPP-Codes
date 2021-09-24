#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
void ReplacePI(string str)
{
    if (str.size() == 0)
    {
        return;
    }
    if (str[0] == 'P' && str[1] == 'I')
    {
        cout << "3.14";
        string res = str.substr(2);
        ReplacePI(res);
    }
    else
    {
        cout << str[0];
        string res = str.substr(1);
        ReplacePI(res);
    }
}
int main()
{
    string s;
    cout << "Enter the string(CAPS) : ";
    getline(cin, s);
    ReplacePI(s);
    getch();
    return 0;
}