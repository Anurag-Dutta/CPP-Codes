#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int num_oct, sum = 0, i = 0, rem;
    cout << "Enter the octal number : ";
    cin >> num_oct;
    cout << "The decimal equivalent of " << num_oct << " is : ";
    while (num_oct != 0)
    {
        rem = num_oct % 10;
        num_oct /= 10;
        sum += rem * pow(8, i);
        i++;
    }
    cout << sum;
    getch();
    return 0;
}