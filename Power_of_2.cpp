#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int Check(int n)
{
    if ((n & (n - 1)) == 0 && n != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    if (Check(num) == 1)
    {
        cout << "\n"
             << num << " is a power of 2" << endl;
    }
    else
    {
        cout << "\n"
             << num << " is not a power of 2" << endl;
    }
    getch();
    return 0;
}