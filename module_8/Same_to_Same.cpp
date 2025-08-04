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

bool isSame(Node* head, Node* head2){
    while (head != NULL)
    {
        if (head->value != head2->value){
            return false;
        }
        head = head->next;
        head2 = head2->next;
    }

    return true;
    
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
        insert_at_tail(head, tail, value);
    }

     while (true)
    {
        cin >> value;
        if(value == -1){
            break;
        }
        insert_at_tail(head2, tail2, value);
    }

    int s = size(head);
    int s2 = size(head2);

    if(s != s2){
        cout << "NO";
    }else{
        bool flag = isSame(head, head2);
        if(flag){
            cout << "YES";
        }else{
            cout << "NO";
        }
    }

    return 0;
}