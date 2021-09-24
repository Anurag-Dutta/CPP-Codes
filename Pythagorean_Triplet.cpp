#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int LA3(int n1, int n2, int n3)
{
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            return n1;
        }
        else
        {
            return n3;
        }
    }
    else
    {
        if (n2 > n3)
        {
            return n2;
        }
        else
        {
            return n3;
        }
    }
}
int main()
{
    int num1, num2, num3;
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "\nEnter the second number : ";
    cin >> num2;
    cout << "\nEnter the third number : ";
    cin >> num3;
    int largest = LA3(num1, num2, num3);
    if (largest == num1)
    {
        if ((num1 * num1) == (num2 * num2) + (num3 * num3))
        {
            cout << "\n\nYES, its a Pythagorean Triplet!";
        }
        else
        {
            cout << "\n\nNO, its not a Pythagorean Triplet!";
        }
    }
    else if (largest == num2)
    {
        if ((num2 * num2) == (num1 * num1) + (num3 * num3))
        {
            cout << "\n\nYES, its a Pythagorean Triplet!";
        }
        else
        {
            cout << "\n\nNO, its not a Pythagorean Triplet!";
        }
    }
    else if (largest == num3)
    {
        if ((num3 * num3) == (num2 * num2) + (num1 * num1))
        {
            cout << "\n\nYES, its a Pythagorean Triplet!";
        }
        else
        {
            cout << "\n\nNO, its not a Pythagorean Triplet!";
        }
    }
    getch();
    return 0;
}