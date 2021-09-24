/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-02 11:45:30
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    int ans = 0;
    for (auto i : v)
    {
        ans ^= i;
    }
    cout << ans << endl;
    getch();
    return 0;
}