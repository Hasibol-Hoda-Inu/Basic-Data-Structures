#include<bits/stdc++.h>
using namespace std;
class MyStack{
    public:
        vector<int> v;

        void push(int val){
            v.push_back(val);
        }
        void pop(){
            v.pop_back();
        }
        int top(){
            return v.back();
        }
        int size(){
            return v.size();
        }
        bool empty(){
            return v.empty();
        }
};

int main(){
    MyStack stck;
    stck.push(10);
    stck.push(20);
    stck.push(30);

    cout << stck.top() << endl;

    stck.pop();
    cout << stck.top() << endl;

    stck.pop();
    cout << stck.top() << endl;

    stck.pop();
    if(!stck.empty()) cout << stck.top() << endl;
    if(!stck.empty()) stck.pop();
    
    return 0;
}