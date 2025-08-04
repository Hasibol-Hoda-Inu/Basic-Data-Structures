#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> li = {10, 20, 30, 20, 50, 20, 70};
    list<int> li2 = {5453, 3214, 1456};

    // list<int> li2;
    // // li2 = li;
    // li2.assign(li.begin(), li.end());

    // li2.clear();
    // li.push_back(40);
    // li.push_front(30);

    // li.insert(next(li.begin(), 7), 80);
    // li.insert(next(li.begin(), 7), li2.begin(), li2.end());

    // li.erase(next(li.begin(), 2), next(li.begin(), 5));

    // replace(li.begin(), li.end(), 20, 200);

    auto it = find(li.begin(), li.end(), 200);
    if(it == li.end()){
        cout << "It's not there";
    }else{
        cout << "It's there";
    }

    // li2.pop_back();
    // li2.pop_front();

    // for(int it : li){
    //     cout << it << " ";
    // }
    return 0;
}