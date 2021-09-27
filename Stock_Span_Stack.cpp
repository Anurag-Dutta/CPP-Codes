/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-27 11:34:01
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

vector<int> span(vector<int> &v)
{
    vector<int> ans;
    stack<pair<int, int>> s;
    for (auto i : v)
    {
        int days = 1;
        while (!s.empty() && s.top().first <= i)
        {
            days += s.top().second;
            s.pop();
        }
        s.push({i, days});
        ans.push_back(days);
    }
    return ans;
}
int main()
{
    vector<int> prices = {100, 80, 60, 70, 60, 75, 85};
    vector<int> SPAN = span(prices);
    for (auto i : SPAN)
    {
        cout << i << " ";
    }
    getch();
    return 0;
}