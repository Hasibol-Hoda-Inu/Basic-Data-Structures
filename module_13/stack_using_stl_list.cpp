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
        list<int> li;

        void push(int val){
            li.push_back(val);
        }
        void pop(){
            li.pop_back();
        }
        int top(){
            return li.back();
        }
        int size(){
            return li.size();
        }
        bool empty(){
            return li.empty();
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