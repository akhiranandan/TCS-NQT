#include "bits/stdc++.h"
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;

    ListNode(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(ListNode* head)
{
    ListNode* curr = head;
    while(curr != NULL)
    {
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}

ListNode* deleteNthListNode(ListNode* head, int n)
{
    if(head == nullptr || head->next == nullptr) return nullptr;
    ListNode* temp = head;
    while (n--)
    {
        temp = temp->next;
    }
    if(temp == nullptr) return head->next;
    ListNode* temp2 = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        temp2 = temp2->next;
    }
    temp2->next = temp2->next->next;
    return head;
}

int main()
{
    ListNode *head = new ListNode(10);
    ListNode *a = new ListNode(20);
    ListNode *b = new ListNode(30);
    ListNode *c = new ListNode(40);
    ListNode *d = new ListNode(50);
    ListNode *e = new ListNode(60);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    printList(head);
    head = deleteNthListNode(head, 3);
    printList(head);
    return 0;
}