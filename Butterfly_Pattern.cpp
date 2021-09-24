#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows in Upper Half : ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= 2 * rows; j++)
        {
            if (j > i && j <= ((2 * rows) - i))
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= 2 * rows; j++)
        {
            if (j > i && j <= ((2 * rows) - i))
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    getch();
    return 0;
}