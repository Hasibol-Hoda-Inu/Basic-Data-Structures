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

void levelOrderTraversal(Node* root){
    string str = "NO TREE";
    if(!root){
        cout << str;
        return;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* f = q.front();
        q.pop();
        cout << f->value << " ";

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }

}

Node* input_tree(){
    int val; cin >> val;
    Node* root;

    if(val == -1)
        root = NULL;
    else 
        root = new Node(val);
    
    queue<Node*> q;

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

int main(){

    Node* root = input_tree();

    levelOrderTraversal(root);

    return 0;
}