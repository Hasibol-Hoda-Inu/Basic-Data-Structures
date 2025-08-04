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

int size(Node* head, int count){
    Node* temp = head;
    
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count; 
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

    Node* head2 = NULL;
    Node* tail2 = NULL;

    int value;
    while (true)
    {
        cin >> value;
        if(value == -1){
            break;
        }
        input_at_tail(head, tail, value);
    }

    while (true)
    {
        cin >> value;
        if(value == -1){
            break;
        }
        input_at_tail(head2, tail2, value);
    }
    
    // print(head);
    int sizeOfHeadOne = size(head, 0);
    // cout << endl;
    // print(head2);
    int sizeOfHeadTwo = size(head2, 0);

    if(sizeOfHeadOne == sizeOfHeadTwo){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}