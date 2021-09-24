/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-16 21:36:20
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
int count(node *head)
{
    int cnt = 0;
    node *ptr = head;
    while (ptr->link != NULL)
    {
        cnt++;
        ptr = ptr->link;
    }
    return cnt;
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
void intersection(node *&head1, node *&head2)
{
    node *ptr1 = head1;
    node *ptr2 = head2;
    int d = abs(count(head1) - count(head2));
    if (count(head1) > count(head2))
    {
        int index = 0;
        while (index != d)
        {
            ptr1 = ptr1->link;
            index++;
        }
        while (ptr1->data != ptr2->data && ptr1 != NULL && ptr2 != NULL)
        {
            ptr1 = ptr1->link;
            ptr2 = ptr2->link;
        }
        if (ptr1 == NULL || ptr2 == NULL)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << ptr1->data << endl;
        }
    }
    else
    {
        int index = 0;
        while (index != d)
        {
            ptr2 = ptr2->link;
            index++;
        }
        while (ptr1->data != ptr2->data && ptr1 != NULL && ptr2 != NULL)
        {
            ptr1 = ptr1->link;
            ptr2 = ptr2->link;
        }
        if (ptr1 == NULL || ptr2 == NULL)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << ptr1->data << endl;
        }
    }
}
int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    tail_insert(head1, 1);
    tail_insert(head1, 2);
    tail_insert(head1, 3);
    tail_insert(head1, 4);
    tail_insert(head1, 8);
    tail_insert(head1, 6);
    tail_insert(head2, 9);
    tail_insert(head2, 10);
    tail_insert(head2, 8);
    tail_insert(head2, 6);
    print(head1);
    cout << endl;
    print(head2);
    cout << endl;
    intersection(head1, head2);
    getch();
    return 0;
}
