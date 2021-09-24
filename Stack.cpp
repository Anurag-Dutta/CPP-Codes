/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-18 15:56:13
*/
#include <bits/stdc++.h>
#include <conio.h>

int max_size = 10;
int stack_array[10];
int top = -1;

using namespace std;

bool IsStackFull()
{
    if (top == max_size)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool IsStackEmpty()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void push(int value)
{
    top++;
    if (top < max_size)
    {
        stack_array[top] = value;
    }
    else
    {
        cout << "STACK OVERFLOW" << endl;
    }
}
void pop()
{
    top--;
    if (top >= -1)
    {
        return;
    }
    else
    {
        cout << "STACK EMPTY" << endl;
    }
}
void print()
{
    for (int i = 0; i <= top; i++)
    {
        cout << stack_array[i] << " ";
    }
    cout << endl;
}
int main()
{
    print();
    getch();
    return 0;
}