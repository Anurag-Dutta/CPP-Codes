#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows : ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows - 1; j >= i; j--)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = rows; i >= 1; i--)
    {
        for (int j = i; j <= rows - 1; j++)
        {
            cout << "  ";
        }
        for (int k = 2 * i - 1; k >= 1; k--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    getch();
    return 0;
}