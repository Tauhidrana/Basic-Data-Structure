#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int sz = 0;

void print_lr(Node *head)
{
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_rl(Node *tail)
{
    cout << "R -> ";
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_head(Node* &head, Node* &tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = tail = newnode;
    }
    else
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
    sz++;
}

void insert_tail(Node* &head, Node* &tail, int val)
{
    Node *newnode = new Node(val);

    if (tail == NULL)
    {
        head = tail = newnode;
    }
    else
    {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
    sz++;
}

void insert_at_any_index(Node* &head, Node* &tail, int idx, int val)
{
   
    Node *newnode = new Node(val);

    Node *tmp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        tmp = tmp->next;
    }

    Node *nxt = tmp->next;

    tmp->next = newnode;
    newnode->prev = tmp;

    newnode->next = nxt;
    nxt->prev = newnode;

    sz++;
}

int main()
{
    int q;
    cin >> q;

    Node *head = NULL;
    Node *tail = NULL;

    while (q--)
    {
        int x, y;
        cin >> x >> y;

        if (x > sz)
        {
            cout << "Invalid"<<endl;
            continue;
        }

        if (x == 0)
        {
            insert_head(head, tail, y);
        }
        else if (x == sz)
        {
            insert_tail(head, tail, y);
        }
        else
        {
            insert_at_any_index(head, tail, x, y);
        }

        print_lr(head);
        print_rl(tail);
    }

    return 0;
}
