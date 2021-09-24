/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-10 23:13:42
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
void merge(int *arr, int l, int r, int mid)
{
    int size1 = mid - l + 1;
    int size2 = r - mid;
    int vault1[size1], vault2[size2];
    for (int i = 0; i < size1; i++)
    {
        vault1[i] = arr[l + i];
    }
    for (int i = 0; i < size2; i++)
    {
        vault2[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2)
    {
        if (vault1[i] < vault2[j])
        {
            arr[k] = vault1[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = vault2[j];
            k++;
            j++;
        }
    }
    while (i < size1)
    {
        arr[k] = vault1[i];
        k++;
        i++;
    }
    while (j < size2)
    {
        arr[k] = vault2[j];
        k++;
        j++;
    }
}
void fun(int *arr, int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        fun(arr, l, mid);
        fun(arr, mid + 1, r);
        merge(arr, l, r, mid);
    }
}
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
    fun(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    getch();
    return 0;
}
