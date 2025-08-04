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

void size_of_the_list(Node* head, int count){
    Node* temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout << count;
}

int main(){
    Node* head = new Node(2);
    Node* a = new Node(1);
    Node* b = new Node(5);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(8);
    Node* f = new Node(9);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    size_of_the_list(head, 0);
    return 0;
}