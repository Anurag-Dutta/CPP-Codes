/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-18 13:46:59
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
void count(node *head)
{
    int count = 0;
    node *ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    cout << count << endl;
}
void head_insert(node *&head, int data)
{
    node *NEWNODE = new node;
    NEWNODE->data = data;
    NEWNODE->link = head;
    head = NEWNODE;
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
void random_insert(node *&head, int data, int position)
{
    node *NEWNODE = new node;
    NEWNODE->data = data;
    if (position == 0)
    {
        head_insert(head, data);
    }
    else
    {
        node *PREVIOUSNODE = head;
        int index = 1;
        while (index != position)
        {
            PREVIOUSNODE = PREVIOUSNODE->link;
            index++;
        }
        NEWNODE->link = PREVIOUSNODE->link;
        PREVIOUSNODE->link = NEWNODE;
    }
}
void search(node *head, int key)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        if (ptr->data == key)
        {
            cout << key << " is found at the address " << ptr->link << endl;
            return;
        }
        ptr = ptr->link;
    }
    cout << key << " is not found!" << endl;
}
void delete_head(node *&head)
{
    node *ptr = head;
    head = ptr->link;
    delete ptr;
}
void delete_tail(node *&head)
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
void delete_random(node *&head, int data)
{
    node *ptr = head;
    while (ptr->link->data != data)
    {
        ptr = ptr->link;
    }
    node *todelete = ptr->link;
    ptr->link = ptr->link->link;
    delete todelete;
}
void reverse(node *&head)
{
    node *PREVIOUSNODE = NULL;
    node *CURRENTNODE = head;
    node *NEXTNODE;
    while (CURRENTNODE != NULL)
    {
        NEXTNODE = CURRENTNODE->link;
        CURRENTNODE->link = PREVIOUSNODE;
        PREVIOUSNODE = CURRENTNODE;
        CURRENTNODE = NEXTNODE;
    }
    head = PREVIOUSNODE;
}
void makecycle(node *&head, int position)
{
    node *temp = head;
    node *store;
    int count = 0;
    while (temp->link != NULL)
    {
        temp = temp->link;
        if (count == position)
        {
            store = temp;
        }
        count++;
    }
    temp->link = store;
}
bool detectcycle(node *head)
{
    node *fast = head;
    node *slow = head;
    while (fast != NULL && fast->link != NULL)
    {
        fast = fast->link->link;
        slow = slow->link;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}
bool deletecycle(node *&head)
{
    node *fast = head;
    node *slow = head;
    while (1)
    {
        fast = fast->link->link;
        slow = slow->link;
        if (fast == slow)
        {
            fast = head;
            break;
        }
    }
    while (1)
    {
        fast = fast->link;
        slow = slow->link;
        if (fast->link == slow->link)
        {
            slow->link = NULL;
            break;
        }
    }
}
int main()
{
    node *head = NULL;
    tail_insert(head, 9);
    tail_insert(head, 10);
    tail_insert(head, 11);
    random_insert(head, 59, 2);
    head_insert(head, 98);
    print(head);
    count(head);
    delete_random(head, 59);
    cout << "After Deletion : " << endl;
    print(head);
    count(head);
    cout << "After Reversal: " << endl;
    reverse(head);
    print(head);
    count(head);
    makecycle(head, 2);
    cout << detectcycle(head) << endl;
    deletecycle(head);
    cout << detectcycle(head) << endl;
    getch();
    return 0;
}
