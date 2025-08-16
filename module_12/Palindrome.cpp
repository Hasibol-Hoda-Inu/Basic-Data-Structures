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

bool isPalindrom(Node* head, Node* tail){
    for(Node* i = head, *j = tail; i !=j && i->prev !=j; i = i->next, j = j->prev){
        if(i->value != j->value){
            return false;
        }
    }
    return true;
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
    
    isPalindrom(head, tail) ? cout << "YES" : cout << "NO";
    


    return 0;
}