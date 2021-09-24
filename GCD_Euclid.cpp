#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
    int n1, n2;
    cout << "Enter first number : ";
    cin >> n1;
    cout << "\nEnter second number : ";
    cin >> n2;
    cout << "The HCF of " << n1 << " and " << n2 << " is : " << gcd(n1,n2) << endl;
    getch();
    return 0;
}