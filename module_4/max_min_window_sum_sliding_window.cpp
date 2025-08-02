#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int sum =0; 
    for (int i = 0; i < k; i++)
    {
        sum+= v[i];
    }
    
    int maxSum = sum, minSum = sum;
    for (int i = k; i < n; i++)
    {
        sum += v[i] - v[i-k];
        maxSum = max(maxSum, sum);
        minSum = min(minSum, sum);
    }

    cout << "Max Sum of Subarray: " << maxSum << endl;
    cout << "Min Sum of Subarray: " << minSum << endl;
    
    
    return 0;
}