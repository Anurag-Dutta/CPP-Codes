#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int xor_n(int n)
{
    if (n % 4 == 0)
    {
        return n;
    }
    else if (n % 4 == 1)
    {
        return 1;
    }
    else if (n % 4 == 2)
    {
        return n + 1;
    }
    else if (n % 4 == 3)
    {
        return 0;
    }
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "XOR till " << n << " = " << xor_n(n);
    return 0;
}
