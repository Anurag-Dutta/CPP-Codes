/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-02 15:47:44
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
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) != 0)
            {
                cout << v[j] << " ";
            }
        }
        cout << endl;
    }
    getch();
    return 0;
}
