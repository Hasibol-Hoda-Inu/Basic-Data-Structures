#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    // for(int i=0; i<n; i++){
    //     cin >> v[i];
    // }

    while (n--)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }

    int x;
    cin >> x;
    v.push_back(x);

    int crnt_idx = v.size() - 1;
    while (crnt_idx != 0)
    {
        int p_idx = (crnt_idx - 1) / 2;

        if (v[p_idx] < v[crnt_idx])
            swap(v[p_idx], v[crnt_idx]);
        else
            break;

        crnt_idx = p_idx;
    }


    for(int i : v)
        cout << i << " ";
    

    
    return 0;
}