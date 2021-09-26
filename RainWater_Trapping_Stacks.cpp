/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-26 17:11:40
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int max_area(vector<int> &v)
{
    int n = v.size(), ans = 0, i = 0;
    stack<int> st;
    v.push_back(0);
    while (i < n)
    {
        while (!st.empty() && v[st.top()] < v[i])
        {
            int t = st.top();
            st.pop();
            if (st.empty())
            {
                break;
            }
            int diff = i - st.top() - 1;
            ans += (min(v[st.top()], v[i]) - v[t]) * diff;
        }
        st.push(i);
        i++;
    }
    return ans;
}
int main()
{
    vector<int> heights = {3, 1, 2, 4, 0, 1, 3, 2};
    cout << max_area(heights);
    getch();
    return 0;
}