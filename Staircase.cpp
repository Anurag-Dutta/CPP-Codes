/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-29 04:52:05
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int fun(int start, int end, int jumps)
{
    if (start == end)
    {
        return 1;
    }
    if (start >= end)
    {
        return 0;
    }
    else
    {
        int count = 0;
        for (int i = 1; i <= jumps; i++)
        {
            count += fun(start + i, end, jumps);
        }
        return count;
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    cout << fun(0, n, k) << endl;
    getch();
    return 0;
}