/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-26 12:33:33
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

void init(deque<int> &dq)
{
    dq.push_back(3);
    dq.push_front(1);
    dq.push_back(-1);
    dq.push_back(-3);
    dq.push_back(5);
    dq.push_back(3);
    dq.push_back(6);
    dq.push_back(7);
}
void fun(deque<int> &dq, int slice, vector<int> &ans)
{
    if (dq.size() < slice)
    {
        return;
    }
    vector<int> temp;
    for (int i = 0; i < slice; i++)
    {
        temp.push_back(dq[i]);
    }
    sort(temp.rbegin(), temp.rend());
    ans.push_back(temp[0]);
    dq.pop_front();
    fun(dq, slice, ans);
}
int main()
{
    deque<int> dq;
    init(dq);
    vector<int> ans;
    int slice;
    cout << "Enter the Slice: ";
    cin >> slice;
    fun(dq, slice, ans);
    for (auto i : ans)
    {
        cout << i << endl;
    }
    getch();
    return 0;
}