#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    vector <int> pref(n);
    pref[0] = v[0];
    for(int i=1; i<n; i++){
        pref[i] = pref[i-1] + v[i];
    }

    vector <int> sufx(n);
    sufx[n-1] = v[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        sufx[i] = sufx[i+1] + v[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(pref[i] == sufx[i]){
            cout << i;
            break;
        }
    }
    
    
    return 0;
}