#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int value;
        Node* right;
        Node* left;

    Node(int value){
        this->value = value;
        this->right = NULL;
        this->left = NULL;
    }
};

Node* inputTree(){
    int val; cin >> val;
    Node* root;

    if(val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* p = q.front();
        q.pop();

        int l, r; cin >> l >> r;
        Node* myLeft, *myRight;
        
        if(l == -1)
            myLeft = NULL;
        else 
            myLeft = new Node(l);

        if(r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);
        
        p->left = myLeft;
        p->right = myRight;

        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}

bool bstSearch(Node* root, int val){
    if(!root)
        return false;
    if(root->value == val)
        return true;

    if(val < root->value)
        return bstSearch(root->left, val);
    else
        return bstSearch(root->right, val);
}

int main(){
    Node* root = inputTree();

    int val; cin >> val;
    bool isThere = bstSearch(root, val);

    if(isThere)
        cout << "found";
    else
        cout << "not found";


    return 0;
}