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

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void remove_duplicates(Node *head)
{
    Node *curr = head;

    while (curr != NULL && curr->next != NULL)
    {
        Node *prev = curr;
        Node *tmp = curr->next;

        while (tmp != NULL)
        {
            if (tmp->val == curr->val)
            {

                prev->next = tmp->next;
                delete tmp;
                tmp = prev->next;
            }
            else
            {

                prev = tmp;
                tmp = tmp->next;
            }
        }
        curr = curr->next;
    }
}

void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;

    while (cin >> val && val != -1)
    {
        insert_tail(head, tail, val);
    }

    remove_duplicates(head);

    print_list(head);

    return 0;
}