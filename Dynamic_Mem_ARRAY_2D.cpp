/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-09 12:20:32
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "\nEnter the number of columns: ";
    cin >> cols;
    int **m = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        m[i] = new int[cols]; //Converting m to a 2D Array.
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> m[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; i++)
    {
        delete[] m[i];
    }
    delete[] m;
    getch();
    return 0;
}