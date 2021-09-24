#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int num, i;
    cout << "Enter the number : ";
    cin >> num;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "\n"
                 << num << " is not Prime";
            break;
        }
    }
    if (i == num)
    {
        cout << "\n"
             << num << " is Prime";
    }
    getch();
    return 0;
}