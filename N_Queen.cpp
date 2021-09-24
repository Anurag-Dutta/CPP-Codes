/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-29 05:37:59
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
bool isxySafe(int **arr, int x, int y, int n)
{
    for (int i = 0; i < x; i++)
    {
        if (arr[i][y] == 1)
        {
            return false;
        }
    }
    int i = x, j = y;
    while (i >= 0 && j >= 0)
    {
        if (arr[i][j] != 0)
        {
            return false;
        }
        i--;
        j--;
    }
    i = x;
    j = y;
    while (i >= 0 && j < n)
    {
        if (arr[i][j] != 0)
        {
            return false;
        }
        i--;
        j++;
    }
    return true;
}
bool fun(int **arr, int x, int y, int n)
{
    if (x >= n)
    {
        return true;
    }
    for (int j = 0; j < n; j++)
    {
        if (isxySafe(arr, x, j, n))
        {
            arr[x][j] = 1;
            if (fun(arr, x + 1, j, n))
            {
                return true;
            }
        }
        arr[x][j] = 0;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }
    if (fun(arr, 0, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    getch();
    return 0;
}
/*
* * * * * j(Columns)
*
*
*
*
i(Rows)
*/
