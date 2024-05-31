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

void deleteNode(Node *node)
{
    node->data = node->next->data;
    node->next = node->next->next;
}
