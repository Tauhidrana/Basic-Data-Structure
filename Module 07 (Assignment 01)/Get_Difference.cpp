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
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void max_min(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    int max = head->val;
    int min = head->val;
    Node *newnode = head->next;
    while (newnode != NULL)
    {
        if (newnode->val > max)
        {
            max = newnode->val;
        }
        if (newnode->val < min)
        {
            min = newnode->val;
        }
        newnode = newnode->next;
    }
    int ans = max - min;
    cout << ans << endl;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            Insert_at_tail(head, tail, val);
        }
    }
    max_min(head);
    return 0;
}