/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-27 12:31:53
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int n, reqd_sum;
    cin >> n >> reqd_sum;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    sort(v.begin(), v.end());
    int low = v[0];
    int high = v[v.size() - 1];
    int counter_low = 0, counter_high = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int sum = low + high;
        if (sum < reqd_sum)
        {
            counter_low++;
            low = v[0 + counter_low];
        }
        else if (sum > reqd_sum)
        {
            counter_high++;
            high = v[v.size() - 1 - counter_high];
        }
        else if (sum == reqd_sum)
        {
            if (0 + counter_low < v.size() - 1 - counter_high)
            {
                cout << low << " + " << high << " = " << reqd_sum << endl;
                counter_low++;
                low = v[0 + counter_low];
            }
        }
    }
    getch();
    return 0;
}