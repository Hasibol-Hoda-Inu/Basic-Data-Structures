#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    //sqrt (√) compexity 

    for (int i = 1; i <= sqrt(n); i++)
    {
        cout << i << " " << n/i << " ";
    }
    
    return 0;
}