#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the divisor : ";
    cin >> num1;
    cout << "\nEnter the dividend : ";
    cin >> num2;
    cout << "\nThe quotient is " << (num2 / num1);
    cout << "\nThe remainder is " << (num2 % num1);
    getch();
    return 0;
}