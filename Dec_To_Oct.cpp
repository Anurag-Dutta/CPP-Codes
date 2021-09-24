#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int num_dec, rem, count = 0;
    cout << "Enter the decimal number : ";
    cin >> num_dec;
    cout << "The octal equivalent of " << num_dec << " is : ";
    int n_d = num_dec;
    while (n_d != 0)
    {
        n_d /= 8;
        count++;
    }
    int arr[count], c = count;
    while (num_dec != 0)
    {
        rem = num_dec % 8;
        num_dec /= 8;
        arr[count - 1] = rem;
        count--;
    }
    for (int i = 0; i < c; i++)
    {
        cout << arr[i];
    }
    getch();
    return 0;
}