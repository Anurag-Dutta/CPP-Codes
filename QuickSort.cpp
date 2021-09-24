/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-11 20:36:37
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
int part(int *arr, int l, int r)
{
    int pivot = arr[l];
    int i = l, j = r;
    while (i < j)
    {
        do
        {
            i++;
        } while (arr[i] <= pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i < j)
        {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[l], &arr[j]);
    return j;
}
void fun(int *arr, int l, int r)
{
    if (l < r)
    {
        int j = part(arr, l, r);
        fun(arr, l, j);
        fun(arr, j + 1, r);
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arr[n] = INT_MAX;
    fun(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    getch();
    return 0;
}