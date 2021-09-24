#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int main()
{
    int *p ;
    p = new int;
    if(!p)
    {
        cout << "Memory Allocation failed!" << endl;
    }
    cout << "Enter the Integer : ";
    cin >> *p;
    cout << *p << endl;
    delete p;
    getch();
    return 0;
}