#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
void Decreasing(int n)
{
    if (n == 1)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << n << endl;
        Decreasing(n - 1);
    }
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    Decreasing(n);
    getch();
    return 0;
}