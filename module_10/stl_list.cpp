#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> val(10, 4);

    // int arr[] = {10, 20, 30};

    vector<int> vect = {40, 50, 60}; 

    list<int> v(vect.begin(), vect.end());


    // cout << *val.begin() << endl;

    // for(auto it = val.begin(); it != val.end(); it++){
    //     cout << *it << " " << endl;
    // }

    for(int it : v){
        cout << it << " ";
    }
    return 0;
}