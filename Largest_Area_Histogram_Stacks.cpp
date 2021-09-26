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
        while (!st.empty() && v[st.top()] > v[i])
        {
            int t = st.top();
            int h = v[t];
            st.pop();
            if (st.empty())
            {
                ans = max(ans, h * i);
            }
            else
            {
                int len = i - st.top() - 1;
                ans = max(ans, h * len);
            }
        }
        st.push(i);
        i++;
    }
    return ans;
}
int main()
{
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    cout << max_area(heights);
    getch();
    return 0;
}