#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    cin.ignore();
    // vector <string> vs(n);
    vector <string> vs;
    
    for (int i = 0; i < n; i++)
    {
        // cin >> vs[i];
        
        string sr;
        // cin >> sr;
        getline(cin, sr);

        vs.push_back(sr);

        // getline(cin, vs[i]);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << vs[i] << endl;
    // }

    for (string s : vs)
    {
        cout << s << endl;
    }
    
    
     
    return 0;
}