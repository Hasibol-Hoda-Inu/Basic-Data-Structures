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

void descending_sorting(Node* head){
    for (Node* i = head; i != NULL; i = i->next)
    {
        for (Node* j = i->next; j != NULL; j = j->next)
        {
            if(i->value < j->value){
                swap(i->value, j->value);
            }
        }
        
    }
    
}

void print(Node* head){
    Node* temp= head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    
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
        insert_at_tail(head, tail, value);
    }

    descending_sorting(head);

    print(head);

    return 0;
}