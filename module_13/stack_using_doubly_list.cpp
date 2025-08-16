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

class MyStack{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int s = 0;

        void push(int val){
             s++;
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
        
        void pop(){
            s--;
            Node* deleteNode = tail;
            tail = tail->prev;
            delete deleteNode;

            if(tail == NULL){
                head = NULL;
                return;
            }
            tail->next = NULL;
           
        }
        
        int top(){
            return tail->value;
        }
        
        int size(){
            return s;
        }
        
        bool empty(){
            return (head == NULL) ?  true : false;
        }
};

int main(){
    MyStack stck;

    int n; cin >> n;
    for(int i = 0; i< n; i++){
        int val; cin >> val;
        stck.push(val);
    }

    while (!stck.empty())
    {
        cout << stck.top() << endl;
        stck.pop();
    }
    
    
    return 0;
}