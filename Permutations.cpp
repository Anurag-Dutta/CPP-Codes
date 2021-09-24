/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-29 04:47:41
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> v(n);
    cout << "\nEnter the elements: \n";
    for (auto &i : v)
    {
        cin >> i;
    }
    do
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));
    getch();
    return 0;
}