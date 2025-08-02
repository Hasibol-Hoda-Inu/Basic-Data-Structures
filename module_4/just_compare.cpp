#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end()); // O(NlogN) = 17*10^5

    int t; cin >> t;
    int q;
    for (int i = 0; i <t; i++) // O(t*logN) = 17*10^5 < 2*10^7 
    {
        cin >> q;
        int l = 0, r = n-1, count = 0; 

        while (r>=l)
        {
            int mid = (l+r)/2;
            if(v[mid] <= q){
                count = mid+1;
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }

        cout << count << endl;
        
    }
    
    
    
    return 0;
}