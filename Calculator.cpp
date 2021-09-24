#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    char choice;
    cout << "********C A L C U L A T O R********";
    cout << "\n\n\nFor Addition, Press +";
    cout << "\nFor Subtraction, Press -";
    cout << "\nFor Multiplication, Press *";
    cout << "\nFor Division, Press /";
    cout << "\n\n\nEnter the choice : ";
    cin >> choice;
    int ch = choice;
    switch (ch)
    {
    case 43:
    {
        float num1, num2;
        cout << "\nEnter the first number : ";
        cin >> num1;
        cout << "\nEnter the second number :";
        cin >> num2;
        float sum = num1 + num2;
        cout << "\n"
             << num1 << " + " << num2 << " = " << sum;
        break;
    }
    case 45:
    {
        float num1, num2;
        cout << "\nEnter the first number : ";
        cin >> num1;
        cout << "\nEnter the second number : ";
        cin >> num2;
        float diff = num1 - num2;
        cout << "\n"
             << num1 << " - " << num2 << " = " << diff;
        break;
    }
    case 42:
    {
        float num1, num2;
        cout << "\nEnter the first number : ";
        cin >> num1;
        cout << "\nEnter the second number : ";
        cin >> num2;
        float prod = num1 * num2;
        cout << "\n"
             << num1 << " X " << num2 << " = " << prod;
        break;
    }
    case 47:
    {
        float num1, num2;
        cout << "\nEnter the dividend : ";
        cin >> num1;
        cout << "\nEnter the divisor : ";
        cin >> num2;
        float div = num1 / num2;
        cout << "\n"
             << num1 << " / " << num2 << " = " << div;
        break;
    }
    default:
        cout << "\nWrong Input ! ";
        break;
    }
    getch();
    return 0;
}