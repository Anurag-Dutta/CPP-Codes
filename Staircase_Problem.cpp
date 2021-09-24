#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int n;
int count(int start, int end)
{
    if (start == end)
    {
        return 1;
    }
    else if (start >= end)
    {
        return 0;
    }
    else
    {
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            cnt += count(start + i, end);
        }
        return cnt;
    }
}
int main()
{
    cout << "Enter the Ending Stair: ";
    cin >> n;
    int s = 0;
    cout << count(s, n) << endl;
    getch();
    return 0;
}