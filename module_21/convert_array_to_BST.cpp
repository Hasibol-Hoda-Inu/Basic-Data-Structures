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

void printTree(Node* root){
    if(!root)
        return;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* p = q.front();
        q.pop();

        cout << p->value << " ";
    
        if(p->left)
            q.push(p->left);

        if(p->right)
            q.push(p->right);
        
    }
}

Node* convertArrayToBst(int arr[], int n, int l, int r){
    if(l > r)
        return NULL;
    
    int mid = (l+r)/2;
    Node* root = new Node(arr[mid]);
    
    Node* leftRoot = convertArrayToBst(arr, n, l, mid-1);
    Node* rightRoot = convertArrayToBst(arr, n, mid+1, r);
    
    root->left = leftRoot;
    root->right = rightRoot;    

    return root;
}

int main(){ 
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    Node* root = convertArrayToBst(arr, n, 0, n-1);

    printTree(root);

    return 0;
}