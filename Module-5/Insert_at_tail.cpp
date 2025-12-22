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
void Insert_at_tail(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    else
    {
        Node *tmp = head;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        // right now tmp is at last node
        tmp->next = newnode;
    }
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
    Node *head =  NULL ;
    // new Node(10);
    // Node *a = new Node(15);
    // Node *b = new Node(20);

    // head->next = a;
    // a->next = b;

    Insert_at_tail(head, 25);
    Insert_at_tail(head, 30);
    Insert_at_tail(head, 35);
    print_linked_list(head);
    return 0;
}