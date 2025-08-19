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

int maxDepth(Node *root)
{
    if (!root)
        return 0;
    int l = maxDepth(root->left);
    int r = maxDepth(root->right);
    return max(l, r) + 1;
}

int nodes(Node *root)
{
    if (!root)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    int l = nodes(root->left);
    int r = nodes(root->right);
    return (l + r) + 1;
}

int main()
{
    Node *root = input_tree();
    int h = maxDepth(root);

    int totalMustNodes = pow(2, h) - 1;
    int totalAvailableNodes = nodes(root);

    if (totalMustNodes == totalAvailableNodes)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}