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

void insert_at_tail(Node* &head, Node* &tail, int val){
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

void print_forward(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int size(Node* head){
    int count = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

bool isEqual(Node* head1, Node* head2){

    while (head1 != NULL)
    {
        if(head1->value != head2->value){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return true;
}

int main(){
    Node* head1 = NULL;
    Node* tail1 = NULL;

    Node* head2 = NULL;
    Node* tail2 = NULL;
    
    int val;
    while (cin>>val)
    {
        if(val == -1){
            break;
        }
        insert_at_tail(head1, tail1, val);
    }

    int v;
    while (cin>>v)
    {
        if(v == -1){
            break;
        }
        insert_at_tail(head2, tail2, v);
    }
    
    int size1 = size(head1);
    int size2 = size(head2);


    if(size1 != size2){
        cout << "NO";
    }else{
        if(isEqual(head1, head2)){
            cout<< "YES";
        }else{
            cout << "NO";
        }
    }
    

    
    return 0;
}