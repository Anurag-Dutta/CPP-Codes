#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int power(int base, int exponent)
{
    return pow(base, exponent);
}
int main()
{
    int base, exp;
    cout << "Enter the base : ";
    cin >> base;
    cout << "\nEnter the exponent : ";
    cin >> exp;
    cout << "\n"
         << base << "^" << exp << " = " << power(base, exp);
    getch();
    return 0;
}