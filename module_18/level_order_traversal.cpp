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
    if(!root)
        return;

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

int main(){
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);



    root->right = b;
    root->left = a;
    a->left = c;
    b->left = d;
    b->right = e;

    levelOrderTraversal(root);

    return 0;
}