#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int range;
    cout << "Enter the range : ";
    cin >> range;
    int a = 0, b = 1;
    cout << "\n"
         << a << " , " << b;
    int c;
    for (int i = 1; i <= range - 2; i++)
    {
        c = a + b;
        cout << " , " << c;
        a = b;
        b = c;
    }
    getch();
    return 0;
}