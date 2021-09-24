#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int isArmstrong(int num)
{
    int n = num;
    int sum = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        sum += pow(rem, 3);
        num = num / 10;
    }
    if (n == sum)
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
    int low, up;
    cout << "Enter the Upper Limit : ";
    cin >> up;
    cout << "\nEnter the Lower Limit : ";
    cin >> low;
    for (int i = low; i <= up; i++)
    {
        if (isArmstrong(i) == 1)
        {
            cout << "\n"
                 << i;
        }
    }
    getch();
    return 0;
}