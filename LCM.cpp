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
    int lcm = (n1 * n2) / (hcf);
    cout << "The LCM of " << n1 << " and " << n2 << " is : " << lcm;
    getch();
    return 0;
}