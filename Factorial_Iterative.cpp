#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int fact = 1;
    cout << "\nThe factorial of " << num << " is : ";
    while (num != 0)
    {
        fact = fact * num;
        num--;
    }
    cout << fact;
    getch();
    return 0;
}