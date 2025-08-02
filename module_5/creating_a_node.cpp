#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int value;
        Node* next;
    Node(int val){
        this->value = val;
        this->next = NULL;
    }
};

int main(){
    Node a(10),b(20),c(300);

    a.next = &b;
    b.next = &c;

    cout << a.value << endl;
    cout << a.next->value << endl;
    cout << a.next->next->value;
    return 0;
}