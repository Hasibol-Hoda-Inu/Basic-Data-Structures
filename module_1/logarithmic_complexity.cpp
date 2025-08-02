#include<bits/stdc++.h>
using namespace std;

int main(){
    // Logarithmic complexity O(logn)
    
    int n;
    cin >> n;

    for (int i = 1; i <= n; i*=2)
    {
        cout << i << endl;
    }
    
    // O(log2n) here the base is 2


    for (int i = 1; i <= n; i/=3)
    {
        cout << i << endl;
    }
    
    // O(log3n) here the base is 3

    int k = 2;
    for (int i = 1; i < n; i++)
    {
        cout << i << endl;
        i*=k;
    }
    
    // O(logkn) here the base is k and the value of k is 2
    return 0;
}