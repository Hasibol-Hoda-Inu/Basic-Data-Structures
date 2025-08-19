#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int>> pq;
    int n; cin >> n;
    while(n--){
        int val; cin >> val;
        pq.push(val);
    }

    int q; cin >> q;
    while(q--){
        int val; cin >> val;
        if(val == 0){
            int x; cin >> x;
            pq.push(x);
            if(pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;

        }else if(val == 1){
            if(pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;

        }else if(val == 2){
            if(!pq.empty()){
                pq.pop();
                if(!pq.empty())
                    cout << pq.top() << endl;
                else
                    cout << "Empty" << endl;
            }
            else
                cout << "Empty" << endl;
                
        }
    }




    return 0;
}