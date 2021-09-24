/*
Problem : (Amazon, Samsung, Snapdeal, Accolite)
Find the smallest positive missing number in the given array.

Example : 
    Input:
    6
    0 -9 1 3 -4 5
    Output:
    2
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int size, k;
    cout << "Enter the size of the array : ";
    cin >> size;
    cout << endl;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter element " << i + 1 << " : ";
        cin >> arr[i];
    }
    sort(arr, arr + size);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            k = i;
            break;
        }
    }
    cout << "\nMissing Number : ";
    for (int i = k; i < size - 1; i++)
    {
        if (arr[k] != 1)
        {
            cout << "1";
            break;
        }
        else
        {
            if (arr[i + 1] - arr[i] == 1)
            {
                continue;
            }
            else
            {
                cout << arr[i] + 1;
                break;
            }
        }
    }
    getch();
    return 0;
}