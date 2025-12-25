#include <iostream>
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

void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}

void insert_tail(Node *&head, Node *&tail, int v)
{
    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    else
    {
        Node *tmp = head;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }

        tmp->next = newnode;
    }
}

void delete_at_idx(Node *&head, Node *&tail, int idx)
{
    if (head == NULL)
    {
        return;
    }

    if (idx == 0)
    {
        Node *deletenode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        else
        {
            delete deletenode;
            return;
        }
    }
    else
    {
        Node *tmp = head;
        for (int i = 0; i < idx - 1; i++)
        {
            tmp = tmp->next;
            {
                if (tmp == NULL)
                {
                    return;
                }
            }
        }

        if (tmp->next == NULL)
        {
            return;
        }
        else
        {
            Node *deletenode = tmp->next;
            tmp->next = tmp->next->next;
            if (tmp->next == NULL)
            {
                tail = tmp;
            }
            delete deletenode;
        }
    }
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if (x == 1)
        {
            insert_tail(head, tail, v);
        }
        else if (x == 2)
        {
            delete_at_idx(head, tail, v);
        }

        print_linked_list(head);
    }

    return 0;
}