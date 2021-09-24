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
        int print = i;
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k <= ((2 * i - 1) / 2) + 1)
            {
                cout << print << " ";
                print--;
            }
            else
            {
                cout << print + 2 << " ";
                print++;
            }
        }
        cout << endl;
    }
    getch();
    return 0;
}