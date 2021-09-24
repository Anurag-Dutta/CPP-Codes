#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int num, i, sum = 0, rem, n;
    cout << "Enter the number : ";
    cin >> num;
    n = num;
    cout << "\n"
         << num << " is ";
    while (num != 0)
    {
        rem = num % 10;
        sum += pow(rem, 3);
        num = num / 10;
    }
    if (n == sum)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "not Armstrong";
    }
    getch();
    return 0;
}