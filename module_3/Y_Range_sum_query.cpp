#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<int> pref(n + 1);
    pref[1] = v[1];
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + v[i];
    }

    while (q--)
    {
        int sum = 0;
        int l, r;
        cin >> l >> r;

        if (l == 1)
        {
            sum = pref[r];
        }
        else
        {
            sum = pref[r] - pref[l - 1];
        }

        cout << sum << endl;
    }

    return 0;
}