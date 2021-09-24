#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int main()
{
    char *p ;
    p = new char;
    if(!p)
    {
        cout << "Memory Allocation failed!" << endl;
    }
    cout << "Enter the Character : ";
    cin >> *p;
    cout << *p << endl;
    delete p;
    getch();
    return 0;
}