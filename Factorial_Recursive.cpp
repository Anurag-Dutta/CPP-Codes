#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return (n)*fact(n - 1);
    }
}
int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    cout << "\nThe factorial of " << num << " is : ";
    cout << fact(num);
    getch();
    return 0;
}