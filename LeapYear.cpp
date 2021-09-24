#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int year;
    cout << "Enter a year : ";
    cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << "\n"
                     << year << " is a leap year";
            }
            else
            {
                cout << "\n"
                     << year << " is not a leap year";
            }
        }
        else
        {
            cout << "\n"
                 << year << " is a leap year";
        }
    }
    else
    {
        cout << "\n"
             << year << " is not a leap year";
    }
    getch();
    return 0;
}