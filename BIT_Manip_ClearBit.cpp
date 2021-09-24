#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int ClearBit(int num, int pos)
{
    return (num & ~(1 << pos));
}
int main()
{
    int n, pos;
    cout << "Enter the number(decimal) : ";
    cin >> n;
    cout << "\nEnter the position : ";
    cin >> pos;
    cout << "The Required number is : " << ClearBit(n, pos); // Sets 0 at a given position and returns the decimal equivalent of the new binary number formed.
    return 0;
}
