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