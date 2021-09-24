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
    cout << "\nThe Sum of ALL individual subarrays are : \n";
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            int count = 0;
            for (int k = i; k <= j; k++)
            {
                count += arr[k];
            }
            cout << count << endl;
        }
    }
    getch();
    return 0;
}