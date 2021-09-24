#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int b, exp;
    cout << "Enter the base : ";
    cin >> b;
    cout << "\nEnter the power : ";
    cin >> exp;
    int val = 1;
    for (int i = 1; i <= exp; i++)
    {
        val *= b;
    }
    cout << "\nThe value is : " << val;
    getch();
    return 0;
}
