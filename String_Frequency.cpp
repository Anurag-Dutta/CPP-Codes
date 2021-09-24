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
    cout << print << " : ";
    int count = 0;
    for (int i = 1; i <= s.size(); i++)
    {
        if (print == s[i])
        {
            count++;
        }
        else
        {
            cout << count + 1 << endl;
            if (i == s.size())
            {
                break;
            }
            print = s[i];
            cout << print << " : ";
            count = 0;
        }
    }
    getch();
    return 0;
}