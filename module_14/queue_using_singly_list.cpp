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
            tail = newNode;
          
        }

        void pop(){
            Node* deleteNode = head;
            head = head->next;
            if(head == NULL){
                tail = NULL;
            }
            delete deleteNode;
            s--;
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