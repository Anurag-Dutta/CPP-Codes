#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter the element " << i + 1 << " : ";
        cin >> arr[i];
    }
    int *ptr = arr;
    for (int i = 0; i < size; i++)
    {
        cout << "\nThe address (memory location) of the number " << *(ptr + i) << " is " << (ptr + i);
    }
    getch();
    return 0;
}