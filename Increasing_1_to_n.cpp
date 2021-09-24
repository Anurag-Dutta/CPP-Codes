#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
void Increasing(int n)
{
    static int n_st = n;
    if (n == 0)
    {
        return;
    }
    else
    {
        cout << n_st - n + 1 << endl;
        Increasing(n - 1);
    }
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    Increasing(n);
    getch();
    return 0;
}