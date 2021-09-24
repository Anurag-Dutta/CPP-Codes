/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-06 12:15:23
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
struct node
{
    int data;
    node *next;
    node *previous;
};
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << "PREVIOUS: " << temp->previous << ", DATA: " << temp->data << ", NEXT: " << temp->next << endl;
        temp = temp->next;
    }
}
void count(node *head)
{
    node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    cout << count << endl;
}
void head_insert(node *&head, int data)
{
    node *NEWNODE = new node;
    NEWNODE->data = data;
    NEWNODE->next = head;
    if (head != NULL)
    {
        head->previous = NEWNODE;
    }
    head = NEWNODE;
}
void tail_insert(node *&head, int data)
{
    node *NEWNODE = new node;
    NEWNODE->data = data;
    NEWNODE->next = NULL;
    if (head == NULL)
    {
        head_insert(head, data);
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NEWNODE;
        NEWNODE->previous = temp;
    }
}
void delete_head(node *&head)
{
    node *ptr = head;
    head = ptr->next;
    head->previous = NULL;
    delete ptr;
}
void delete_tail(node *&head)
{
    node *ptr1 = head;
    node *ptr2;
    while (ptr1->next != NULL)
    {
        ptr2 = ptr1;
        ptr1 = ptr1->next;
    }
    node *todelete = ptr1->next;
    ptr2->next = NULL;
    delete (todelete);
}
void delete_random(node *&head, int data)
{
    node *ptr = head;
    while (ptr->next->data != data)
    {
        ptr = ptr->next;
    }
    node *todelete = ptr->next;
    ptr->next = ptr->next->next;
    delete todelete;
}
int main()
{
    node *head = NULL;
    head_insert(head, 5);
    head_insert(head, 9);
    head_insert(head, 10);
    tail_insert(head, 10);
    print(head);
    count(head);
    delete_tail(head);
    print(head);
    count(head);
    getch();
    return 0;
}
