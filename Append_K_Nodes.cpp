/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-14 21:36:01
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
struct node
{
    int data;
    node *link;
};
void print(node *newhead)
{
    node *ptr = newhead;
    while (ptr != NULL)
    {
        cout << "DATA: " << ptr->data << ", LINK: ";
        if (ptr->link == 0)
        {
            cout << "NULL" << endl;
        }
        else
        {
            cout << ptr->link << endl;
        }
        ptr = ptr->link;
    }
}
void tail_insert(node *&head, int data)
{
    node *NEWNODE = new node;
    NEWNODE->data = data;
    NEWNODE->link = NULL;
    if (head == NULL)
    {
        head = NEWNODE;
    }
    else
    {
        node *ptr = head;
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = NEWNODE;
    }
}
void append(node *&head, node *&newhead, int k)
{
    node *ptr1 = head;
    node *ptr2;
    int index = 1;
    while (index != k)
    {
        index++;
        ptr1 = ptr1->link;
    }
    ptr2 = ptr1->link;
    ptr1->link = NULL;
    newhead = ptr2;
    while (ptr2->link != NULL)
    {
        ptr2 = ptr2->link;
    }
    ptr2->link = head;
}
int main()
{
    node *head = NULL;
    node *newhead = NULL;
    tail_insert(head, 1);
    tail_insert(head, 2);
    tail_insert(head, 3);
    tail_insert(head, 4);
    tail_insert(head, 5);
    tail_insert(head, 6);
    cout << "Before Appending: \n";
    print(head);
    append(head, newhead, 4);
    cout << "\nAfter Appending: \n";
    print(newhead);
    getch();
    return 0;
}