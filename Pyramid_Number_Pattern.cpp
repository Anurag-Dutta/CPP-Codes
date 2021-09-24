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
        for (int j = 1; j <= ((2 * i) - 1); j += 2)
        {
            cout << (j / 2) + 1 << "   ";
        }
        cout << endl;
    }
    getch();
    return 0;
}