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

Node* input(){
    int val; cin >> val;
    queue<Node*> q;
    Node* root;

    if(val == -1)
        root = NULL;
    else 
        root = new Node(val);
    
    if(root)
        q.push(root);

    while(!q.empty()){
        Node* p = q.front();
        q.pop();

        int l, r; cin >> l >> r;
        Node *myLeft, *myRight;

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

int size(Node* root){
    if(!root)
        return 0;
    int l = size(root->left);
    int r = size(root->right);
    return l+r+1;
}

int main(){

    Node* root = input();

    int s = size(root);
    cout << s;
    
    
    
    return 0;
}