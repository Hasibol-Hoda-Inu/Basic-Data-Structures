#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> li = {10, 20, 30, 40, 20, 50, 60, 20, 70, 80, 20, 90, 100};
    // li.remove(20);

    // li.sort();
    // li.sort(greater<int>());
    // li.unique();

    li.reverse();
    
    for(int it : li){
        cout << it << " ";
    }
    return 0;
}