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
            Node* newNode = new Node(val);
            if(head == NULL){
                head = newNode;
                tail = newNode;
                return;
            }
            
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
            s++;
        }
        
        void pop(){
            Node* deleteNode = tail;
            tail = tail->prev;
            delete deleteNode;

            if(tail == NULL){
                head = NULL;
                return;
            }
            tail->next = NULL;
            s--;
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
    MyStack stck1;

    int n1; cin >> n1;
    for(int i = 0; i< n1; i++){
        int val; cin >> val;
        stck1.push(val);
    }

    MyStack stck2;
        int n2; cin >> n2;
    for(int i = 0; i< n2; i++){
        int val; cin >> val;
        stck2.push(val);
    }

    bool isEqual = true;

    if(stck1.size() != stck2.size()){
        isEqual = false;
    }else{
        while(!stck1.empty()){
            int x = stck1.top();
            int y = stck2.top();
            if(x != y){
                isEqual = false;
                break;
            }
            stck1.pop();
            stck2.pop();
        }
        
    }
    
    if(isEqual)
        cout << "YES";
    else 
        cout << "NO";

    
    
    return 0;
}