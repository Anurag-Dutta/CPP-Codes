/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-18 01:04:33
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
    BlueKnight obj;
    BlueKnight *ptr;
    ptr = &obj;
    (*ptr).fun();
    (*ptr).fun(7);
    getch();
    return 0;
}