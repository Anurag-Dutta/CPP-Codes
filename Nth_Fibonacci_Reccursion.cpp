#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int fibo(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return fibo(n - 2) + fibo(n - 1);
    }
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "\nThe n'th Fibonacci number is : " << fibo(n);
    getch();
    return 0;
}