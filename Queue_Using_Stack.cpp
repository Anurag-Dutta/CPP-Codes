/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-26 11:25:45
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int stack1[100], stack2[100];
int top1 = -1, top2 = -1;
int cnt = 0;

void push1(int val)
{
    stack1[++top1] = val;
}
void push2(int val)
{
    stack2[++top2] = val;
}
int pop1()
{
    return (stack1[top1--]);
}
int pop2()
{
    return (stack2[top2--]);
}
void enqueue(int value)
{
    push1(value);
    cnt++;
}
void dequeue()
{
    for (int i = 0; i < cnt; i++)
    {
        push2(pop1());
    }
    pop2();
    cnt--;
    if (cnt == -1)
    {
        cout << "Empty" << endl;
        cnt++;
        return;
    }
    for (int i = 0; i < cnt; i++)
    {
        push1(pop2());
    }
}
void print()
{
    for (int i = 0; i <= top1; i++)
    {
        cout << stack1[i] << " ";
    }
    cout << "\n";
}
int main()
{
    enqueue(6);
    enqueue(9);
    enqueue(12);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    enqueue(10);
    enqueue(10);
    print();
    getch();
    return 0;
}