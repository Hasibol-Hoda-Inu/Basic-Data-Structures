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

vector<int> v;

void levelOrder(Node *root, int m)
{
    if (!root)
        return;

    queue<pair<Node *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        q.pop();

        Node *node = p.first;
        if (p.second == m)
            v.push_back(node->value);

        if (node->left)
        {
            q.push({node->left, p.second + 1});
        }
        if (node->right)
        {
            q.push({node->right, p.second + 1});
        }
    }
}

int main()
{
    Node *root = input_tree();

    int x;
    cin >> x;
    levelOrder(root, x);

    if (v.empty())
    {
        cout << "Invalid";
    }
    else
    {
        for (int i : v)
        {
            cout << i << " ";
        }
    }

    return 0;
}