#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int main()
{
    string s;
    cout << "Enter the string : ";
    getline(cin, s);
    cout << endl;
    cout << "\nThe possible substrings are : \n";
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j < s.size(); j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << s[k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    getch();
    return 0;
}