#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return x * power(x, n - 1);
    }
}
int main()
{
    int N, X;
    cout << "Enter the value of X : ";
    cin >> X;
    cout << "\nEnter the value of N : ";
    cin >> N;
    cout << "\nX^N = " << power(X, N) << endl;
    getch();
    return 0;
}