#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < q; i++)
    {
        int val;
        cin >> val;

        bool flag = false;
        int l = 0, r = n - 1;

        for (int i = 0; r >= l; i++)
        {
            int mid = (l + r) / 2;
            if (v[mid] == val)
            {
                flag = true;
                break;
            }
            else if (val < v[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (flag)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}