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

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int temp = v[i]+1;    
        auto it = find(v.begin(), v.end(), temp);
        if(it != v.end()) count++;
    }

    cout << count;
    
    
    return 0;
}