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

int sum(Node *root)
{
    if (!root)
        return 0;
    queue<Node *> q;
    q.push(root);
    int x = 0;

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        if (p->left == NULL && p->right == NULL)
            continue;
        else
            x += p->value;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return x;
}

int main()
{
    Node *root = input_tree();
    int ans = sum(root);

    cout << ans;

    return 0;
}