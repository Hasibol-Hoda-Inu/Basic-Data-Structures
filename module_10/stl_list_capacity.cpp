#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> val(10, 4);


    vector<int> vect = {40, 50, 60}; 

    list<int> v(vect.begin(), vect.end());
    
    v.resize(5);

    // v.clear();

    // cout << v.size() << endl;
  
    // if(v.empty()){
    //     cout << "Empty" ;
    // }else{
    //     cout << "not empty";
    // }
  
  
    // cout << v.max_size() << endl;
   

    for(int it : v){
        cout << it << " ";
    }
    return 0;
}