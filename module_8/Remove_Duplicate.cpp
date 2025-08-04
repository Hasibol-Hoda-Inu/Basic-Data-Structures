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

void input(Node* &head, Node* &tail, int value){
    Node* newNode = new Node(value);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void delete_duplicates(Node* head) {
    Node* i = head;
    while(i != NULL) {
        
        Node* j = i;          

        while (j->next != NULL) {
            if (i->value == j->next->value) {
                Node* deleteNode = j->next; 
                j->next = j->next->next;   
                      
                delete deleteNode;            
            } else {
                
                j = j->next;
            }
        }
        i = i->next;
    }
}

void print(Node *head)
{
    Node *temp = head;
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
        input(head, tail, value);
    }

    delete_duplicates(head);
    print(head);

    return 0;
}