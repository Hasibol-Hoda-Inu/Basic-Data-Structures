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

int finding_the_max_value(Node* head){
    int max = INT16_MIN;
    for (Node* i = head; i != NULL; i = i->next)
    {
       if(max < i->value){
            max = i->value;
       }
    //    int max = max(max, i->value);
    }
    return max;
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

    int max = finding_the_max_value(head);
    cout << max;

    return 0;
}