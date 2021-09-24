/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-21 10:45:11
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

struct node
{
    node *link;
    int data;
};
void print(node *head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " is found at the address " << ptr->link << endl;
        ptr = ptr->link;
    }
}
int count(node *head)
{
    int cnt = 0;
    node *ptr = head;
    while (ptr != NULL)
    {
        cnt++;
        ptr = ptr->link;
    }
    return cnt;
}
void enqueue(node *&head, int data)
{
    node *NEWNODE = new node;
    NEWNODE->data = data;
    NEWNODE->link = head;
    head = NEWNODE;
}
void dequeue(node *&head)
{
    node *ptr1 = head;
    node *ptr2;
    while (ptr1->link != NULL)
    {
        ptr2 = ptr1;
        ptr1 = ptr1->link;
    }
    ptr2->link = NULL;
    delete ptr1;
}
int main()
{
    node *head = NULL;
    enqueue(head, 6);
    enqueue(head, 9);
    enqueue(head, 12);
    dequeue(head);
    print(head);
    cout << count(head) << endl;
    getch();
    return 0;
}