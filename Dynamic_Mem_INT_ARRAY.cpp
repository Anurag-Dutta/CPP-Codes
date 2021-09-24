#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    int *p;
    p = new int[size];
    if (!p)
    {
        cout << "Memory Allocation failed!" << endl;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element " << i + 1 << " : ";
        cin >> p[i];
        cout << endl;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "The element " << i + 1 << " : " << p[i] << endl;
    }
    delete[] p;
    getch();
    return 0;
}