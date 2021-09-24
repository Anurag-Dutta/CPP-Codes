/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-14 11:19:53
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    vector<int> v;
    int x;
    while (cin >> x)
    {
        v.push_back(x); // Adding values to a vector.
    }
    cout << "\nThe Unsorted Vector is: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    vector<int> vault;
    vault = v;
    sort(v.begin(), v.end());
    cout << "\nThe Sorted Vector(ASCENDING ORDER) is: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    sort(v.begin(), v.end(), greater<int>());
    cout << "\nThe Sorted Vector(DESCENDING ORDER) is: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\nThe Vector in reversed format is: ";
    reverse(vault.begin(), vault.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << vault[i] << " ";
    }
    getch();
    return 0;
}
