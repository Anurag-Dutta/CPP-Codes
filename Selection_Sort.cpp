/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-04 21:40:12
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int size;
    cout << "Enter the Size : ";
    cin >> size;
    int arr[size];
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter the element " << i + 1 << " : ";
        cin >> arr[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[min_index] > arr[j])
            {
                min_index = j;
            }
        }
        swap(&arr[min_index], &arr[i]);
    }
    cout << "The Sorted Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}