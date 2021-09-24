/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-04 21:44:56
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
    for (int i = 1; i < n; i++)
    {
        int pivot = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > pivot)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = pivot;
    }
    for (auto i : arr)
    {
        cout << i << " ";
    }
    getch();
    return 0;
}
