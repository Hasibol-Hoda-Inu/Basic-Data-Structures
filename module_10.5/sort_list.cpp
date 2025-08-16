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

void input(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void sort(Node* head, Node* tail){
    for(Node* i = head; i != NULL; i = i->next){
        for(Node* j = i->next; j != NULL; j = j->next){
            if(i->value > j->value){
                swap(i->value, j->value);
            }
        }
    }
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
    while (cin>>val)
    {
        if(val == -1){
            break;
        }
        input(head, tail, val);
    }
    
    sort(head, tail);

    print(head);
    

    return 0;
}