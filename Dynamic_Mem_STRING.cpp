#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int main()
{
    string *p;
    p = new string;
    if (!p)
    {
        cout << "Memory Allocation failed!" << endl;
    }
    cout << "Enter the String : ";
    cin >> *p;
    cout << *p << endl;
    delete p;
    getch();
    return 0;
}