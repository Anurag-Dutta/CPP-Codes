#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int num, revnum = 0, rem;
    cout << "Enter the number : ";
    cin >> num;
    int n = num;
    while (num != 0)
    {
        rem = num % 10;
        revnum = revnum * 10 + rem;
        num = num / 10;
    }
    if (revnum == n)
    {
        cout << "\n"
             << n << " is Palindrome";
    }
    else
    {
        cout << "\n"
             << n << " is not Palindrome";
    }
    getch();
    return 0;
}