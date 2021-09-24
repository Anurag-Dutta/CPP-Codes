#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum(n - 1);
    }
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "SUM of all Natural Numbers till " << n << " : " << sum(n);
    getch();
    return 0;
}