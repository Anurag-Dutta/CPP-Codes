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
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int count = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (isPrime(i) == 1 && isPrime(num - i) == 1)
        {
            cout << "\n"
                 << i << " + " << num - i << " = " << num << endl;
        }
        else
        {
            count++;
        }
    }
    if (count == num / 2)
    {
        cout << "\nNo, " << num << " can't be represented as a sum of two primes ! " << endl;
    }
    getch();
    return 0;
}