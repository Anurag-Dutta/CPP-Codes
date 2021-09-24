#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
void Bin(int n)
{
    int mask = 32768; // Binary Equivalent of 32768 = 1000 0000 0000 0000
    while (mask > 0)
    {
        if ((n & mask) == 0)
        {
            cout << "0";
        }
        else
        {
            cout << "1";
        }
        mask = mask >> 1; // Right Shifting
    }
}
int main()
{
    int dec;
    cout << "Enter the number : ";
    cin >> dec;
    cout << "Binary Equivalent : ";
    Bin(dec);
    getch();
    return 0;
}