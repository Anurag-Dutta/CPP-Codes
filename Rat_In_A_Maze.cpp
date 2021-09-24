/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-29 05:22:17
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
bool isxySafe(int **arr, int x, int y, int n)
{
    if ((x < n && y < n) && (arr[x][y] != 0))
    {
        return true;
    }
    return false;
}
bool fun(int **arr, int x, int y, int n, int **path)
{
    if ((x == n - 1) && (y == n - 1))
    {
        path[x][y] = 1;
        return true;
    }
    if (isxySafe(arr, x, y, n))
    {
        path[x][y] = 1;
        if (fun(arr, x + 1, y, n, path))
        {
            return true;
        }
        if (fun(arr, x, y + 1, n, path))
        {
            return true;
        }
        path[x][y] = 0;
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
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int **path = new int *[n];
    for (int i = 0; i < n; i++)
    {
        path[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            path[i][j] = 0;
        }
    }
    if (fun(arr, 0, 0, n, path))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << path[i][j] << " ";
            }
            cout << endl;
        }
    }
    getch();
    return 0;
}