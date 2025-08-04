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

void delete_from_head(Node* &head, Node* &tail){
    if(head == NULL){
        return;
    }
    
    Node* deleteNode = head;
    head = head->next;
    head->prev = NULL;
    delete deleteNode;

    if(head == NULL){
        tail = NULL;
    }
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

    delete_from_head(head, tail);

    print_forward(head);


    return 0;
}