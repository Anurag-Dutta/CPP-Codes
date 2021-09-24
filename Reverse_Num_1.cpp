#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int rem;
    cout << "\nThe Reversed number is : ";
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        cout << rem;
    }
    getch();
    return 0;
}