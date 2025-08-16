#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    int n; cin >> n;
    while(n--){
        int val; cin >> val;
        st.push(val);
    }

    queue<int> q;
    int n2; cin >> n2;
    while(n2--){
        int val; cin >> val;
        q.push(val);
    }


    bool isEqual = true;

    if(st.size() != q.size()){
        isEqual = false;
    }else{
        int x = st.top();
        int y = q.front();
        if(x != y)
            isEqual = false;
        st.pop();
        q.pop();
    }

    if(isEqual)
        cout << "YES";
    else 
        cout << "NO";

    
    return 0;
}