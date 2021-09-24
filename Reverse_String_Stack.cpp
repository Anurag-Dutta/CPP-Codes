/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-18 18:44:57
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

void print(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int x = s.top();
    cout << x << " ";
    s.pop();
    print(s);
    s.push(x);
}
void reverse(stack<int> &s, stack<int> &nova)
{
    if (s.empty())
    {
        return;
    }
    int x = s.top();
    nova.push(x);
    s.pop();
    reverse(s, nova);
}
int main()
{
    stack<int> s;
    stack<int> nova;
    s.push(8);
    s.push(6);
    s.push(10);
    s.push(12);
    s.pop();
    print(s);
    cout << endl;
    reverse(s, nova);
    print(nova);
    getch();
    return 0;
}