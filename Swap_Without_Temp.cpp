#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the number 1 : ";
    cin >> num1;
    cout << "\nEnter the number 2 : ";
    cin >> num2;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "\nAfter Swapping, the values of number 1 and number 2 are " << num1 << " & " << num2;
    getch();
    return 0;
}