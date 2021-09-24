#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int main()
{
    float *p;
    p = new float;
    if (!p)
    {
        cout << "Memory Allocation failed!" << endl;
    }
    cout << "Enter the Floating Point Value : ";
    cin >> *p;
    cout << *p << endl;
    delete p;
    getch();
    return 0;
}