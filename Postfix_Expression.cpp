/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-19 00:24:46
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

void postfixevaluation(string s)
{
    stack<int> store;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            store.push(s[i] - '0');
        }
        else
        {
            int y = store.top();
            store.pop();
            int x = store.top();
            store.pop();
            switch (s[i])
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
    string s = "46+2/5*7+";
    postfixevaluation(s);
    getch();
    return 0;
}