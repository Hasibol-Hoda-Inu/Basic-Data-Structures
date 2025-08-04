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

void delete_node(Node* &head){
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
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
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head, tail, val);
    }

    delete_node(head);
    print(head);
    
    return 0;
}