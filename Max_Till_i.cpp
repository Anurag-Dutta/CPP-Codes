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
    cout << "\nThe max elements till i'th elements are : ";
    for (int i = 0; i < size; i++)
    {
        int max = arr[i];
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
            }
        }
        cout << max << " ";
    }
    getch();
    return 0;
}