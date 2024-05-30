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

void printList(Node* head)
{
    Node* curr = head;
    while(curr != NULL)
    {
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}

Node *reverseList(Node *head)
{
    Node *prev = nullptr;
    Node *curr = head;
    while (curr != nullptr)
    {
        Node *last = curr->next;
        curr->next = prev;
        prev = curr;
        curr = last;
    }
    return prev;
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
    printList(head);
    Node* newHead = reverseList(head);
    printList(newHead);
    return 0;
}