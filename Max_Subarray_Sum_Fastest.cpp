/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-04 11:41:24
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
        cout << "\nEnter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int sum = 0, best = 0;
    cout << "\nThe maximum subarray sum : ";
    for (int i = 0; i < n; i++)
    {
        sum = max(arr[i], arr[i] + sum);
        best = max(sum, best);
    }
    cout << best << endl;
    getch();
    return 0;
}