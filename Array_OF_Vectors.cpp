/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-06 19:39:37
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    vector<int> v[rows];
    for (int i = 0; i < rows; i++)
    {
        cout << "Enter the number of columns in Row " << i + 1 << ": ";
        cin >> cols;
        for (int j = 0; j < cols; j++)
        {
            int temp;
            cin >> temp;
            v[i].push_back(temp);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    getch();
    return 0;
}
