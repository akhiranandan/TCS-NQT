#include "bits/stdc++.h"
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *mergeTwoLists(Node *list1, Node *list2)
{
    Node *head = new Node(1);
    Node *temp = head;
    while (list1 != nullptr && list2 != nullptr)
    {
        if (list1->data < list2->data)
        {
            head->next = list1;
            list1 = list1->next;
        }
        else
        {
            head->next = list2;
            list2 = list2->next;
        }
        head = head->next;
    }
    if (list1 != nullptr)
        head->next = list1;
    else if (list2 != nullptr)
        head->next = list2;
    return temp->next;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    return 0;
}