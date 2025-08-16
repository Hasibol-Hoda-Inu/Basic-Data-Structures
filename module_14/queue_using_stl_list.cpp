#include<bits/stdc++.h>
using namespace std;

class MyQueue{
    public:
        list<int> li;

        void push(int val){
            li.push_back(val);
        }

        void pop(){
            li.pop_front();
        }

        int front(){
            return li.front();
        }

        int back(){
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