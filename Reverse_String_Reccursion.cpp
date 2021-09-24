#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
void Reverse(string str)
{
    if (str.length() == 0)
    {
        return;
    }
    string res = str.substr(1);
    Reverse(res);
    cout << str[0];
}
int main()
{
    string s;
    cout << "Enter the string : ";
    getline(cin, s);
    Reverse(s);
    getch();
    return 0;
}
