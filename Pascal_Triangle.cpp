#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int fact(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1);
    }
}
int nCr(int n, int r)
{
    return (fact(n) / (fact(r) * fact(n - r)));
}
int main()
{
    int rows;
    cout << "Enter the number of rows : ";
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = rows - 1; j >= i; j--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }
    getch();
    return 0;
}