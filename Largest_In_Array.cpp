#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int size;
    cout << "Enter the number of the elements : ";
    cin >> size;
    float arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter element " << i + 1 << " : ";
        cin >> arr[i];
    }
    float max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "\nThe largest element in the array : " << max;
    getch();
    return 0;
}