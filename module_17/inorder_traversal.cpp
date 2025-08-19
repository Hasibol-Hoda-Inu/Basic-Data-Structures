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

void inorder(Node* root){
    if(root == NULL)
        return;
    inorder(root->left);
    cout << root->value << " ";
    inorder(root->right);
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

    inorder(root);

    return 0;
}