#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *right;
    Node *left;

    Node(int value)
    {
        this->value = value;
        this->right = NULL;
        this->left = NULL;
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

void leftPrint(Node* root){
    if(!root)
        return;
    if(root->left != NULL)
        leftPrint(root->left);
    else
        leftPrint(root->right);
    
    cout << root->value << " ";
}


void rightPrint(Node* root){
    if(!root)
        return;
    cout << root->value << " ";
    if(root->right != NULL)
         rightPrint(root->right);
    else
        rightPrint(root->left);
}


int main()
{
    Node *root = input_tree();

    leftPrint(root->left);
    cout << root->value << " ";
    rightPrint(root->right);


    return 0;
}