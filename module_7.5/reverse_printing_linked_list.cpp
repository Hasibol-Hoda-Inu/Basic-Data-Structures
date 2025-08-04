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

void input_at_tail(Node* &head, Node* &tail, int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void reverse_printing(Node* temp){

    if(temp == NULL){
        return;
    }

    reverse_printing(temp->next);
    cout << temp->value << " ";
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int value;
    while (true)
    {
        cin >> value;
        if(value == -1){
            break;
        }
        input_at_tail(head, tail, value);
    }
    
    reverse_printing(head);
    return 0;
}