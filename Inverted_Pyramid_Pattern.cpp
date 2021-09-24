#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows : ";
    cin >> rows;
    for (int i = rows; i >= 1; i--)
    {
        int k = rows;
        for (int j = i; j >= 1; j--)
        {
            cout << rows + 1 - k << " ";
            k--;
        }
        cout << endl;
    }
    getch();
    return 0;
}