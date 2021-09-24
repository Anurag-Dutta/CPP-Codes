#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "\nEnter the second number : ";
    cin >> b;
    cout << "\nBefore Swapping, the numbers are " << a << " and " << b << " respectively ";
    swap(&a, &b);
    cout << "\nAfter Swapping, the numbers are " << a << " and " << b << " respectively ";
    getch();
    return 0;
}