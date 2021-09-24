/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-17 11:49:16
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
struct node
{
    int data;
    node *link;
};
void print(node *head)
{
    node *ptr = head;
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
void merge(node *&head1, node *&head2, node *&nh)
{
    node *ptr1 = head1;
    node *ptr2 = head2;
    node *ptr3 = nh;
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data < ptr2->data)
        {
            tail_insert(nh, ptr1->data);
            ptr1 = ptr1->link;
        }
        else
        {
            tail_insert(nh, ptr2->data);
            ptr2 = ptr2->link;
        }
    }
    while (ptr1 != NULL)
    {
        tail_insert(nh, ptr1->data);
        ptr1 = ptr1->link;
    }
    while (ptr2 != NULL)
    {
        tail_insert(nh, ptr2->data);
        ptr2 = ptr2->link;
    }
}
int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    node *nh = NULL;
    tail_insert(head1, 1);
    tail_insert(head1, 4);
    tail_insert(head1, 5);
    tail_insert(head1, 7);
    tail_insert(head2, 2);
    tail_insert(head2, 3);
    tail_insert(head2, 6);
    tail_insert(head1, 66);
    print(head1);
    cout << endl;
    print(head2);
    cout << endl;
    merge(head1, head2, nh);
    print(nh);
    getch();
    return 0;
}