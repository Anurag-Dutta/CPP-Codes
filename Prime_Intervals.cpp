#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int isPrime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
            break;
        }
    }
    if (i == n)
    {
        return 1;
    }
}
int main()
{
    int low, up;
    cout << "Enter the Upper Limit : ";
    cin >> up;
    cout << "\nEnter the Lower Limit : ";
    cin >> low;
    for (int i = low; i <= up; i++)
    {
        if (isPrime(i) == 1)
        {
            cout << "\n"
                 << i;
        }
    }
    getch();
    return 0;
}