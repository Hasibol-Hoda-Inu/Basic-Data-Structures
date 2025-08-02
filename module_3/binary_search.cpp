#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int val;
    cin >> val;

    bool flag = false;

    int l = 0, r = n-1;
    while (r >= l)
    {
        int mid = (l+r)/2;
        if(v[mid] == val){
            flag = true;
            break;
        }else if(val < v[mid]){
            r = mid - 1;
        }else{
            l = mid+1;
        }
    }
    
    if(flag){
        cout << "found";
    }else {
        cout << "not found";
    }
    
    return 0;
}