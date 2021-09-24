#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int GetBit(int num, int pos)
{
    if ((num & (1 << pos)) == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n, pos;
    cout << "Enter the number(decimal) : ";
    cin >> n;
    cout << "\nEnter the position : ";
    cin >> pos;
    cout << "The Required BIT is : " << GetBit(n, pos); // Returns the BIT of any number at a required position.
    return 0;
}
