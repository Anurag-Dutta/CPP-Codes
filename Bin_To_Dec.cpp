#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int num_bin, sum = 0, i = 0, rem;
    cout << "Enter the binary number : ";
    cin >> num_bin;
    cout << "The decimal equivalent of " << num_bin << " is : ";
    while (num_bin != 0)
    {
        rem = num_bin % 10;
        num_bin /= 10;
        sum += rem * pow(2, i);
        i++;
    }
    cout << sum;
    getch();
    return 0;
}