#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int main()
{
    cout << "S U D O K O\n\n\n";
    cout << "Rules! " << endl;
    cout << "RULE 1 : Enter the elements(1-9) continually without any gaps." << endl;
    cout << "RULE 2 : The missing element should be entered as '0'." << endl;
    int t;
    t = 9;
    int store[t], k = 0;
    for (int i = 0; i < t; i++)
    {
        cout << "\nEnter the Row " << i + 1 << " : ";
        string s;
        cin >> s;
        string str_cpy = s;
        sort(s.begin(), s.end());
        for (int i = 1; i < 9; i++)
        {
            if (s[i] - s[i - 1] == 2)
            {
                store[k] = s[i] - 49;
                k++;
                break;
            }
            else if (s[8] == '8')
            {
                store[k] = 9;
                k++;
                break;
            }
        }
    }
    cout << "\n\n\nThe Missing Elements are : \n";
    for (int i = 0; i < t; i++)
    {
        cout << "\nFor Row " << i + 1 << " : ";
        cout << store[i] << endl;
    }
    getch();
    return 0;
}