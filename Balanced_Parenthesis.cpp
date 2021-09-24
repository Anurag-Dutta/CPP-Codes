/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-19 16:04:46
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

bool isValid(string s)
{
    stack<char> store;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] == '[') || (s[i] == '{') || (s[i] == '('))
        {
            store.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (store.top() == '(')
            {
                store.pop();
            }
            else
            {
                return false;
            }
        }
        else if (s[i] == '}')
        {
            if (store.top() == '{')
            {
                store.pop();
            }
            else
            {
                return false;
            }
        }
        else if (s[i] == ']')
        {
            if (store.top() == '[')
            {
                store.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    string s = "[{()]}";
    cout << isValid(s) << endl;
    getch();
    return 0;
}