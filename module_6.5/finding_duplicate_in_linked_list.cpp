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

void count_duplicates(Node* head){
    int freq[101] = {0};
    Node* temp = head;

    while (temp != NULL)
    {   
        freq[temp->value]++;
        temp = temp->next;
    }

    bool flag = false;
    for (int i = 0; i < 101; i++)
    {
        if(freq[i] > 1){
            flag = true;
        }
    }

    if(flag) cout << "YES";
    else cout << "NO";   
    
}

int main(){
    Node* head = new Node(5);
    Node* a = new Node(4);
    Node* b = new Node(8);
    Node* c = new Node(6);
    Node* d = new Node(2);
    Node* e = new Node(1);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    count_duplicates(head);

    return 0;
}