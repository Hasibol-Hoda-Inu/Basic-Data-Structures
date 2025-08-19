#include<bits/stdc++.h>
using namespace std;

int main(){
    // priority_queue<int> pq; // -> max priority_queue
    priority_queue<int, vector<int>, greater<int>> pq; // -> min priority_queque
    int n; cin >> n;
    while(n--){
        int val; cin >> val;
        pq.push(val);
    }

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    // cout << pq.top();

    return 0;
}


