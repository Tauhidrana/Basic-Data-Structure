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
void print_reverse(Node* tmp)
{
  // base case
  if (tmp == NULL)
  {
    return;
  }
  print_reverse(tmp->next);
  cout<<tmp->val<<endl;
  
   
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
int val;
while(true)
{
    cin>> val;
    if (val == -1)
    {
        break;
    }
    else
    {
        Insert_at_tail(head,tail,val);
    }
    
}
print_reverse(head);
    return 0;
}