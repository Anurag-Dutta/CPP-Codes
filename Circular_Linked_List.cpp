/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-17 17:02:03
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
struct node
{
    int data;
    node *link;
};
void print(node *&head)
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
        if (ptr == head)
        {
            break; // To Get Rid of infinte loop.
        }
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
        int index = 1;
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
            index++;
        }
        ptr->link = NEWNODE;
    }
}
void head_insertion_circle(node *&head, int data)
{
    node *NEWNODE = new node;
    NEWNODE->data = data;
    NEWNODE->link = head;
    head = NEWNODE;
    node*ptr =head;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=head;
}
void tail_insertion_circle(node *&head, int data)
{
    if (head == NULL)
    {
        head_insertion_circle(head, data);
    }
    node *NEWNODE = new node;
    NEWNODE->data = data;
    node *ptr = head;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = NEWNODE;
    NEWNODE->link = head;
}
int main()
{
    node *head = NULL;
    cout << "\tSingly Linked List\n\n";
    tail_insert(head, 1);
    tail_insert(head, 2);
    tail_insert(head, 3);
    tail_insert(head, 4);
    cout << "HEAD ADDRESS: " << head << endl;
    print(head);
    cout << endl;
    cout << "\tCircular Linked List (HEAD INSERTION)\n\n";
    head_insertion_circle(head, 5);
    cout << "HEAD ADDRESS: " << head << endl;
    print(head);
    cout << endl;
    /*
    cout << "\tCircular Linked List (TAIL INSERTION)\n\n";
    tail_insertion_circle(head, 9);
    cout << "HEAD ADDRESS: " << head << endl;
    print(head);
    */
    getch();
    return 0;
}
