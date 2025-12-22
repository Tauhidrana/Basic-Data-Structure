#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void Insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

   
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

   
    tail->next = newnode;

   
    tail = tail->next;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

int main()
{
    
    Node *head = new Node(5);
    Node *a = new Node(15);
    Node *tail = new Node(20);

    head->next = a;
    a->next = tail;

    Insert_at_tail(head, tail, 25);
    // Insert_at_tail(head, tail, 30);
    // Insert_at_tail(head, tail, 35);

    print_linked_list(head);

    return 0;
}