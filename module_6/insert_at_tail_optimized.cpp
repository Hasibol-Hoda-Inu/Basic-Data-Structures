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

void insert_at_tail(Node* &head, Node* &tail, int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    
}

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    
    head->next = a;
    a->next = tail;

    insert_at_tail(head, tail, 100);
       insert_at_tail(head, tail, 300);
          insert_at_tail(head, tail, 500);
             insert_at_tail(head, tail, 700);
                insert_at_tail(head, tail, 900);
    print(head);

    cout << "\ntail: " << tail->value;
    return 0;
}