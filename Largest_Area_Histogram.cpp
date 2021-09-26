/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-26 15:46:13
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int right(vector<int> &heights, int n)
{
    int i;
    for (i = n + 1; i < heights.size(); i++)
    {
        if (heights[i] < heights[n])
        {
            break;
        }
    }
    return (i - n) - 1;
}
int left(vector<int> &heights, int n)
{
    int i;
    for (i = n - 1; i >= 0; i--)
    {
        if (heights[i] < heights[n])
        {
            break;
        }
    }
    return -(i - n) - 1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> heights(n);
    vector<int> area;
    for (auto &i : heights)
    {
        cin >> i;
    }
    int counter = 0;
    for (int i = 0; i < heights.size(); i++)
    {
        int r = right(heights, i);
        int l = left(heights, i);
        area.push_back((r + l + 1) * heights[i]);
    }
    sort(area.rbegin(), area.rend());
    cout << area[0] << endl;
    getch();
    return 0;
}