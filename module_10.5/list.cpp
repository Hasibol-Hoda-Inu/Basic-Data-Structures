#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> li;
    
    int val;
    while (cin >> val)
    {
        if(val == -1){
            break;
        }
        li.push_back(val);
    }

    for(int it : li){
        cout << it << " ";
    }
    
    return 0;
}