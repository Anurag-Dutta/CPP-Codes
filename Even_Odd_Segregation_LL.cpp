/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-18 11:43:18
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
void segregation(node *head)
{
    node *ptr1 = head;
    node *even = head->link;
    node *odd = head;
    node *even_start = head->link;
    node *odd_start = head;
    while (odd->link != NULL && even->link != NULL)
    {
        odd->link = even->link;
        odd = odd->link;
        even->link = odd->link;
        even = even->link;
    }
    odd->link = even_start;
}
int main()
{
    node *head = NULL;
    tail_insert(head, 1);
    tail_insert(head, 2);
    tail_insert(head, 3);
    tail_insert(head, 4);
    tail_insert(head, 5);
    tail_insert(head, 6);
    tail_insert(head, 7);
    tail_insert(head, 8);
    segregation(head);
    print(head);
    getch();
    return 0;
}