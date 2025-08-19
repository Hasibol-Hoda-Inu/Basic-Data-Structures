#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> mp;
    mp["rakib"] = 2;
    mp["akib"] = 1;
    mp["sakib"] = 3;

    // cout << mp["sakib"] << endl;
    
    mp.insert({"enu", 4});

    // mp.clear();

    for(auto it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    // for(auto it : mp){
    //     cout << it.first << " " << it.second << endl;
    // }



    return 0;
}