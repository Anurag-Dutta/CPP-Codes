#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    cout << "\n\nT I C   T A C   T O E\n\n";
    cout << "\n\tPlayer [1] : \'X\'";
    cout << "\n\tPlayer [2] : \'0\'";
    cout << "\n\n\n";
    char arr[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    cout << "     |     |     " << endl;
    cout << "  " << arr[0][0] << "  |  " << arr[0][1] << "  |  " << arr[0][2] << "  " << endl;
    cout << "-----|-----|-----" << endl;
    cout << "  " << arr[1][0] << "  |  " << arr[1][1] << "  |  " << arr[1][2] << "  " << endl;
    cout << "-----|-----|-----" << endl;
    cout << "  " << arr[2][0] << "  |  " << arr[2][1] << "  |  " << arr[2][2] << "  " << endl;
    cout << "     |     |     " << endl;
    int choice;
    cout << "\n\nPlayer 1 : ";
    cin >> choice;
    switch (choice)
    {
        case 1:
        {
            arr[0][1] = 'X';
            break;
        }
        case 2:
        {
            arr[0][2] = 'X';
            break;
        }
        case 3:
        {
            arr[0][3] = 'X';
            break;
        }
        case 4:
        {
            arr[1][0] = 'X';
            break;
        }
        case 5:
        {
            arr[1][1] = 'X';
            break;
        }
        case 6:
        {
            arr[1][2] = 'X';
            break;
        }
        case 7:
        {
            arr[2][0] = 'X';
            break;
        }
        case 8:
        {
            arr[2][1] = 'X';
            break;
        }
        case 9:
        {
            arr[2][2] = 'X';
            break;
        }
        default:
        {
            cout << "\nWrong Choice!";
            break;
        }
    }
    if (choice <= 9)
    {
        cout << "     |     |     " << endl;
        cout << "  " << arr[0][0] << "  |  " << arr[0][1] << "  |  " << arr[0][2] << "  " << endl;
        cout << "-----|-----|-----" << endl;
        cout << "  " << arr[1][0] << "  |  " << arr[1][1] << "  |  " << arr[1][2] << "  " << endl;
        cout << "-----|-----|-----" << endl;
        cout << "  " << arr[2][0] << "  |  " << arr[2][1] << "  |  " << arr[2][2] << "  " << endl;
        cout << "     |     |     " << endl;
    }
    getch();
    return 0;
}
