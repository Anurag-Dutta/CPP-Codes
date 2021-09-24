#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "\n"
             << num << " is Even.";
    }
    else
    {
        cout << "\n"
             << num << " is Odd.";
    }
    getch();
    return 0;
}