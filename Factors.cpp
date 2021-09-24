#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    cout << "\nThe factors of the number " << num << " are : ";
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << "\n"
                 << i;
        }
    }
    getch();
    return 0;
}
