/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-27 10:50:14
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

void span(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int days = 0;
        for (int j = i; j >= 0; j--)
        {
            if (v[i] >= v[j])
            {
                days++;
            }
            else
            {
                break;
            }
        }
        cout << days << endl;
    }
}
int main()
{
    vector<int> prices = {100, 80, 60, 70, 60, 75, 85};
    span(prices);
    getch();
    return 0;
}