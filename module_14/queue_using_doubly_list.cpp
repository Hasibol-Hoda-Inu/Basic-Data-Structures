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

int main(){
    MyQueue q;

    int n; cin >> n;
    while(n--){
        int v; cin >> v;
        q.push(v);
    }

    cout <<   q.size() << " " << q.back() << endl;

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }



    return 0;
}