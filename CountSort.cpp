/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-16 15:30:28
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > k)
        {
            k = arr[i];
        }
    }
    int output[n];
    int count[k] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 1; i <= k; i++)
    {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        output[--count[arr[i]]] = arr[i];
    }
    for (auto i : output)
    {
        cout << i << " ";
    }
    cout << endl;
    getch();
    return 0;
}