/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-04 11:35:45
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    cout << endl;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter element " << i + 1 << " : ";
        cin >> arr[i];
    }
    int best = 0;
    cout << "\nThe maximum subarray sum : ";
    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = i; j < size; j++)
        {
            sum += arr[j];
            best = max(sum, best);
        }
    }
    cout << best << endl;
    getch();
    return 0;
}