#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end()); //NlogN for sorting the array

    int t;
    cin >> t;
    int val;
    for (int i = 0; i < t; i++)
    {
        cin >> val;
        int l = 0;
        int r = n - 1;
        bool flag = false;
        while (r>=l) // longN for this loop
        {
            int mid = (l + r) / 2;
            if (v[mid] == val)
            {
                flag = true;
                break;
            }
            else if (v[mid] > val)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if(flag) cout << "YES" << endl; else cout << "NO" << endl;
    }

    return 0;
}