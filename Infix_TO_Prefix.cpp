/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-19 14:25:09
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int precedence(char ch)
{
    if(ch=='^')
    {
        return 3;
    }
    else if(ch=='*'||ch=='/')
    {
        return 2;
    }
    else if(ch=='+'||ch=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
void InfixTOPrefixevaluation(string s)
{
    reverse(s.begin(),s.end());
    stack<char> store;
    string result;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A')&&s[i]<='Z')
        {
            result+=s[i];
        }
        else if(s[i]==')')
        {
            store.push(s[i]);
        }
        else if(s[i]=='(')
        {
            while(!store.empty()&&store.top()!=')')
            {
                result+=store.top();
                store.pop();
            }
            if(!store.empty())
            {
                store.pop();
            }
        }
        else
        {
            while(!store.empty()&&precedence(store.top())>precedence(s[i]))
            {
                result+=store.top();
                store.pop();
            }
            store.push(s[i]);
        }
    }
    while(!store.empty())
    {
        result+=store.top();
        store.pop();
    }
    reverse(result.begin(),result.end());
    cout << result << endl;
}
int main()
{
    string s = "(a-b/c)*(a/k-l)";
    InfixTOPrefixevaluation(s);
    getch();
    return 0;
}