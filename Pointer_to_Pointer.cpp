#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int *ptr;
    int **ptr_ptr;
    ptr = &num;
    ptr_ptr = &ptr;
    cout << "\nThe integer " << *ptr << " is stored at the address " << ptr;
    cout << "\nThe address storing the address " << ptr << " of the integer " << *ptr << " is " << ptr_ptr;
    getch();
    return 0;
}