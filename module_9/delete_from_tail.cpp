#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int value;
        Node* next;
        Node* prev;

    Node(int value){
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void delete_from_tail(Node* &head, Node* &tail){
    if(head == NULL){
        return;
    }
    
    Node* deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;

    if(tail == NULL){
        head = NULL;
        return;
    }
    tail->next = NULL;
}

void print_forward(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    
    head->next = a;
    a->next = tail;

    a->prev = head;
    tail->prev = a;

    delete_from_tail(head, tail);

    print_forward(head);


    return 0;
}