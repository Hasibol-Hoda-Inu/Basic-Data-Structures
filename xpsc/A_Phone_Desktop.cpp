#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int x, y; cin >> x >> y;
        int screens = y/2;
        int remains = screens*7;
        if(y%2 != 0){
            screens++;
            remains+=11;
        }

        if(x > remains){
            x-=remains;
            screens+= x/15;
            if(x%15 != 0)
                screens++;
        }
        
        cout << screens << endl;

    }
    return 0;
}