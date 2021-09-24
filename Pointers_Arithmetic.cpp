#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int *ptr;
    ptr = &num;
    cout << "The address (memory location) of the number " << *ptr << " is " << ptr;
    ptr++;
    cout << "\nAfter incrementation, the address of the pointer (integer type) is : " << ptr;
    --ptr;
    cout << "\nAfter decrementation, the address of the pointer (integer type) is : " << ptr;
    getch();
    return 0;
}