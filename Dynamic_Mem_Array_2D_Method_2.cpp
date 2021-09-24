/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-09 12:52:01
*/
#include <bits/stdc++.h>
#include <conio.h>
typedef int *intptr;

using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "\nEnter the number of columns: ";
    cin >> cols;
    intptr *arr = new intptr[rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols]; //Converting arr to a 2D Array.
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    getch();
    return 0;
}