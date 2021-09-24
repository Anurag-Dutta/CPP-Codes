#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        cout << "\n"
             << num << " X " << i << " = " << num * i << endl;
    }
    getch();
    return 0;
}