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

void func(int* &p){
    p = NULL;
}

int main(){
    int x = 10;
    int* p = &x;
    func(p);
    cout << p << endl;
    return 0;
}