#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int main()
{
    int rows1, cols1, rows2, cols2;
    cout << "Enter the number of rows of matrix 1 : ";
    cin >> rows1;
    cout << "\nEnter the number of columns of matrix 1 : ";
    cin >> cols1;
    cout << "\n\nEnter the number of rows of matrix 2 : ";
    cin >> rows2;
    cout << "\nEnter the number of columns of matrix 2 : ";
    cin >> cols2;
    int arr1[rows1][cols1], arr2[rows2][cols2];
    cout << "\n\n\nEnter the elements of the first matrix : ";
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            cout << "\nEnter the element (" << i << "," << j << ") : ";
            cin >> arr1[i][j];
        }
    }
    cout << "\n\n\nEnter the elements of the second matrix : ";
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            cout << "\nEnter the element (" << i << "," << j << ") : ";
            cin >> arr2[i][j];
        }
    }
    if (rows1 == rows2 && cols1 == cols2)
    {
        cout << "\n\n\nResultant Matrix : \n";
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols1; j++)
            {
                cout << arr1[i][j] + arr2[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "\n\n\nMatrix Addition is not possible ! ";
    }
    getch();
    return 0;
}