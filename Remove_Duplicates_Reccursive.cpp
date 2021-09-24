#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
void RemoveDuplicates(string str)
{
    if (str.size() == 0)
    {
        return;
    }
    if (str[0] == str[1])
    {
        RemoveDuplicates(str.substr(1));
    }
    else
    {
        cout << str[0];
        RemoveDuplicates(str.substr(1));
    }
}
int main()
{
    string s;
    cout << "Enter the string(CAPS) : ";
    getline(cin, s);
    RemoveDuplicates(s);
    getch();
    return 0;
}