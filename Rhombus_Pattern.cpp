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
            cout << " ";
        }
        for (int j = 1; j <= rows; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    getch();
    return 0;
}