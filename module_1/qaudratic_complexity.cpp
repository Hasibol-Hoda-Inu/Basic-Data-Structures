#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    // Quatratic complexity O(n^2)

    for (int j = 1; j <= n; j++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "Enu" << endl;                  // O(n^2)
        }
        
    }

    

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << "Huda" << endl;                 // O(n*m)
        }
        
    }
    
  
    
    
    return 0;
}