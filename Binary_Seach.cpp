#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
void BinSearch()
{
    int n;
    cout << "Enter the number of Elements: ";
    cin >> n;
    int arr[n];
    cout << "\n\n\nEnter the elements in ASCENDING ORDER";
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter the Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int search;
    cout << "\nEnter the element to be searched: ";
    cin >> search;
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == search)
        {
            cout << "\n"
                 << search << " is found in the location " << mid + 1;
            return;
        }
        else if (arr[mid] > search)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << "\n"
         << search << " is not found in the array";
}
int main()
{
    BinSearch();
    getch();
    return 0;
}