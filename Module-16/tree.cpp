#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);
        p->left = myLeft;
        p->right = myRight;
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void level_order(Node* root)
{
    queue<Node*> q;
    if(root)
     q.push(root);
    while (!q.empty())
    {
        Node * f = q.front();
         q.pop();
       cout<<f->val<<" ";
       if(f->left)
        q.push(f->left);
        if(f->right)
         q.push(f->left);  
    }
    
     
}

void Preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    Preorder(root->left);
    Preorder(root->right);
}
void Inorder(Node *root)
{
    if (root == NULL)
        return;
    Inorder(root->left);
    cout << root->val << " ";
    Inorder(root->right);
}
void Postorder(Node *root)
{
    if (root == NULL)
        return;
    Postorder(root->left);
    Postorder(root->right);
    cout << root->val << " ";
}
int count_nodes(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    return (l + r + 1);
}

int count_leaf_nodes(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    int l = count_leaf_nodes(root->left);
    int r = count_leaf_nodes(root->right);
    return (l + r);
}
int max_height(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 0;
    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l, r) + 1;
}

int main()
{
    Node *root = input_tree();
    level_order(root);
    cout << "\n";
    Preorder(root);
    cout << "\n";
    Inorder(root);
    cout << "\n";
    Postorder(root);
    cout << "\n";
    cout << count_nodes(root);
    cout << "\n";
    cout << count_leaf_nodes(root);
    cout << "\n";
    cout << max_height(root) << endl;

    return 0;
}