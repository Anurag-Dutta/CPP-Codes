#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int main()
{
    string a, b;
    int count = 0;
    cout << "Enter the word : ";
    cin >> a;
    cout << endl;
    for (int i = 0; i < a.size(); i++)
    {
        b[i] = a[a.size() - 1 - i];
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
        {
            count++;
        }
    }
    if (count == a.size())
    {
        cout << a << " is Palindromic.";
    }
    else
    {
        cout << a << " is non Palindromic.";
    }
    getch();
    return 0;
}