/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-18 01:21:12
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
class BlueKnight
{
public:
    void fun()
    {
        cout << "Hello!" << endl;
    }
    void fun(int x)
    {
        cout << "Hi@ Coder" << x << endl;
    }
};
int main()
{
    BlueKnight *ptr = new BlueKnight; // Pointer to Class BlueKnight.
    ptr->fun();
    ptr->fun(5);
    getch();
    return 0;
}