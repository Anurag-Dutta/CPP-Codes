/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-26 18:19:46
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
bool isRedundant(string str)
{
    stack<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '(')
        {
            st.push(str[i]);
        }
        else if (str[i] == ')')
        {
            int count = 0;
            while (!st.empty() && st.top() != '(')
            {
                st.pop();
                count++;
            }
            if (!st.empty())
            {
                st.pop();
            }
            if (count == 0)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    string str = "(((a+b)))";
    cout << isRedundant(str);
    getch();
    return 0;
}