#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v = {1, 2, 3, 4, 2, 6};
    vector <int> v2 = {100, 200, 300};

    // v.insert(v.begin()+1, v2.begin(), v2.end()); // inserts v2 in v 1st positon
    // v.erase(v.begin()+1);
    v.erase(v.begin()+2, v.end());

    // replace(v.begin(), v.end(), 2, 200);
    // auto it = find(v.begin(), v.end(), 100);

    // if(it != v.end()){
    //     cout << "found";
    // }else{
    //     cout << "not found";
    // }

    for(int x : v){
        cout << x << endl;
    }

    return 0;
}