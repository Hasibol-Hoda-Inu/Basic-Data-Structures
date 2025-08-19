#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a, b, c; cin >> a >> b >> c;
        int a_distance = abs(a-1);
        int b_distance = abs(b - c) + abs(c - 1);

        if(a_distance < b_distance)
            cout << 1 << endl;
        else if(a_distance > b_distance) 
            cout << 2 << endl;
        else 
            cout << 3 << endl;
    }
    return 0;
}