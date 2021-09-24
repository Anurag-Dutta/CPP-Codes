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
    int revnum = 0;
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        revnum = revnum * 10 + rem;
    }
    cout << revnum;
    getch();
    return 0;
}