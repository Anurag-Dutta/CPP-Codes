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
        cout << (int)ch << " ";
        fun(str.substr(1));
    }
}
int main()
{
    string s;
    cout << "Enter the string : ";
    getline(cin, s);
    fun(s);
    getch();
    return 0;
}