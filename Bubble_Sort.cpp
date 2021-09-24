/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-04 21:35:27
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

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
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "The Sorted Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
