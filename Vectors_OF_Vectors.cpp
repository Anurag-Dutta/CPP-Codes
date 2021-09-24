/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-06 19:56:55
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    vector<vector<int>> v;
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        cout << "Enter the number of columns in row " << i + 1 << ": ";
        cin >> cols;
        vector<int> temp;
        for (int j = 0; j < cols; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++)
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