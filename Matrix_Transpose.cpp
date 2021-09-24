#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int main()
{
    int rows, cols;
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
    cout << "\nThe Transpose of the Matrix will be : \n";
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    getch();
    return 0;
}