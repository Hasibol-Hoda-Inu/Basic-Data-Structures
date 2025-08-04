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

void insert_at_any(Node* head, int indx, int value){
    Node* newNode = new Node(value);
    Node* temp = head;
    for (int i = 0; i < indx-1; i++)
    {
        temp = temp->next;
        if(temp == NULL) return;
    }
    newNode->next = temp->next;
    temp->next = newNode;

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
    Node* b = new Node(30);
    
    head->next = a;
    a->next = b;

    insert_at_any(head, 2, 100);

    print(head);
    return 0;
}