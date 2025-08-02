#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int value;
        Node* next;
    Node(int val){
        this->value = val;
        this->next = NULL;
    }
};

int main(){
    Node* head = new Node(10);
    Node* a = new Node(230);

    head->next = a;
    cout << head->value << " " << head->next->value << endl;
    return 0;
}