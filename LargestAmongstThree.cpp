#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter the First number : ";
    cin >> num1;
    cout << "\nEnter the Second number : ";
    cin >> num2;
    cout << "\nEnter the Third number : ";
    cin >> num3;
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << "\n"
                 << num1 << " is the largest number.";
        }
        else
        {
            cout << "\n"
                 << num3 << " is the largest number.";
        }
    }
    else
    {
        if (num2 > num3)
        {
            cout << "\n"
                 << num2 << " is the largest number.";
        }
        else
        {
            cout << "\n"
                 << num3 << " is the largest number.";
        }
    }
    getch();
    return 0;
}