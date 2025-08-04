#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int value;
        Node* next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

void validatingASortedLinkedList(Node* head){
    Node* temp = head;
    bool flag = true;
    while (temp->next != NULL)
    {
        if(temp->value > temp->next->value){
            flag = false;
            break;
        }
        temp = temp->next;
    }

    if(flag) cout << "YES";
    else cout << "NO";
    
}

int main(){
    Node* head = new Node(2);
    Node* a = new Node(4);
    Node* b = new Node(6);
    Node* c = new Node(5);
    Node* d = new Node(8);
    Node* e = new Node(4);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    validatingASortedLinkedList(head);
    return 0;
}