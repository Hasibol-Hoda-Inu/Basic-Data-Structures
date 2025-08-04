#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
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

int size(Node* head, int count){
    Node* temp = head;
    
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count; 
}

void insert_at_any(Node* &head, int indx, int value){
    Node* newNode = new Node(value);
    Node* temp = head;
    if(indx == 0){
        newNode->next = head;
        head = newNode;
    }else{
        for (int i = 0; i < indx-1; i++)
    {
        temp = temp->next;
        if(temp == NULL) return;
    }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    

}

void print(Node* head){
    Node* temp= head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        insert_at_tail(head, tail, value);
    }

    int t; cin >> t;
    for (int i = 0; i < t; i++)
    {
        int s = size(head, 0);
        // cout << "s: " << s << endl;

        int idx, val;
        cin >> idx >> val;

        if(idx > s){
            cout << "Invalid" << endl;
        }else{
            insert_at_any(head, idx, val);
            print(head);

        }
  

    }
    
    
    
    return 0;
}