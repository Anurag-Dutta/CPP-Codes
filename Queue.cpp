/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-20 12:59:40
*/
#include <bits/stdc++.h>
#include <conio.h>

int max_size = 10;
int queue_array[10];
int front = 0;
int back = -1;
int itemcount = 0;

using namespace std;

int peek()
{
    return queue_array[front];
}
bool empty()
{
    if (itemcount == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool full()
{
    if (itemcount == max_size)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void enqueue(int value)
{
    if (full())
    {
        cout << "QUEUE is FULL" << endl;
    }
    else
    {
        back++;
        queue_array[back] += value;
        itemcount++;
    }
}
void dequeue()
{
    if (empty())
    {
        cout << "QUEUE is EMPTY" << endl;
    }
    else
    {
        front++;
        itemcount--;
    }
}
void print()
{
    for (int i = front; i <= back; i++)
    {
        cout << queue_array[i] << " ";
    }
    cout << endl;
}
int main()
{
    enqueue(6);
    enqueue(9);
    enqueue(12);
    dequeue();
    print();
    getch();
    return 0;
}