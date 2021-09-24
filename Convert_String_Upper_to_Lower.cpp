#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int main()
{
    string s;
    cout << "Enter the string : ";
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ' && s[i] != '.')
        {
            s[i] += 32;
        }
    }
    cout << s << endl;
    getch();
    return 0;
}