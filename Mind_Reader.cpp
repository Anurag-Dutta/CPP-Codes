#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int arr[4][4];
    int k = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            arr[i][j] = k;
            k++;
        }
    }
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
        cout << endl;
    }
    cout << "Follow the following steps: ..." << endl;
    cout << "Draw the following matrix in a page !" << endl;
    cout << "Choose 1'st number" << endl;
    cout << "Cross the other elements of the same row and the same column";
    cout << "i.e. You can't choose numbers that are crossed ";
    cout << "Choose the same procedure 3 more times: " << endl;
    cout << "The sum of the numbers that you have selected is 34" << endl;
    getch();
    return 0;
}