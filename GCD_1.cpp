#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter first number : ";
    cin >> n1;
    cout << "\nEnter second number : ";
    cin >> n2;
    int hcf = __gcd(n1, n2);
    cout << "The HCF of " << n1 << " and " << n2 << " is : " << hcf;
    getch();
    return 0;
}
