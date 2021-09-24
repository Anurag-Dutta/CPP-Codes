#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int main()
{
    int rows, cols, search;
    cout << "Enter the number of rows : ";
    cin >> rows;
    cout << "\nEnter the number of columns : ";
    cin >> cols;
    int arr[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "\nEnter the Element (" << i << "," << j << ") : ";
            cin >> arr[i][j];
        }
    }
    cout << "\nEnter the element to be searched : ";
    cin >> search;
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (arr[i][j] == search)
            {
                cout << "\n"
                     << search << " is found at the position (" << i << "," << j << ")";
                break;
            }
        }
        if (arr[i][j] == search)
        {
            break;
        }
    }
    getch();
    return 0;
}