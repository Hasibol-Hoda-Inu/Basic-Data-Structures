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

class MyQueue{
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
            Node* deleteNode = head;
            head = head->next;
            delete deleteNode;
            
            if(head == NULL){
                tail = NULL;
                return;
            }
            head->prev = NULL;
        }

        int front(){
            return head->value;
        }

        int back(){
            return tail->value;
        }

        int size(){
            return s;
        }

        bool empty(){
            return (head == NULL) ? true : false;
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
    MyStack st;
    MyQueue q;

    int n, m;
    cin >> n >> m;

    while (n--)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    while (m--)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    bool isEqual = true;

    if (st.size() != q.size())
    {
        isEqual = false;
    }
    else
    {
        while (!st.empty())
        {
            if (st.top() != q.front())
            {
                isEqual = false;
                break;
            }
            st.pop();
            q.pop();
        }
    }

    if (isEqual)
        cout << "YES";
    else
        cout << "NO";

    
    return 0;
}