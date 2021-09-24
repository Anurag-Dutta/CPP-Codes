#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of terms : ";
    cin >> n;
    int sum = (n * (n + 1)) / 2;
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            cout << i << " = " << sum;
        }
        else
        {
            cout << i << " + ";
        }
    }
    getch();
    return 0;
}