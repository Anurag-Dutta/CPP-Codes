/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-19 00:24:06
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

void prefixevaluation(string s)
{
    stack<int> store;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            store.push(s[i] - '0');
        }
        else
        {
            char ch = s[i];
            int x = store.top();
            store.pop();
            int y = store.top();
            store.pop();
            switch (ch)
            {
                case '+':
                {
                    store.push(x + y);
                    break;
                }
                case '-':
                {
                    store.push(x - y);
                    break;
                }
                case '*':
                {
                    store.push(x * y);
                    break;
                }
                case '/':
                {
                    store.push(x / y);
                    break;
                }
                case '^':
                {
                    store.push(pow(x, y));
                    break;
                }
            }
        }
    }
    cout << store.top() << endl;
}
int main()
{
    string s;
    cout << "Enter the Prefix Expression: ";
    cin >> s;
    prefixevaluation(s);
    getch();
    return 0;
}