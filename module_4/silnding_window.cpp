#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> result;
    int sum = 0;

    for (int i = 0; i < k; i++)
    {
        sum += v[i];
    }

    result.push_back(sum);

    for (int i = k; i < n; i++)
    {
        sum += v[i];
        sum -= v[i-k];
        result.push_back(sum);
    }
    
    

    for (int ans : result)
    {
        cout << ans << " ";
    }
    
    return 0;
}