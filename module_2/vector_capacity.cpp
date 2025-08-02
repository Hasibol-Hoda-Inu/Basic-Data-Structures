#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v(10, 5);
    // v.clear();
    // v.push_back(20);

    // vector<int> v={1,2,3,4};
    v.resize(2);
    v.resize(4, 1);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    
    
    return 0;
}