#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int main()
{
    string s;
    cout << "Enter the string : ";
    getline(cin, s);
    sort(s.begin(), s.end());
    char print = s[0];
    cout << print;
    for (int i = 0; i < s.size(); i++)
    {
        if (print == s[i])
        {
            continue;
        }
        else
        {
            print = s[i];
            cout << print;
        }
    }
    getch();
    return 0;
}