#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    int n, m;
    cin >> n >> m;

    while (n--)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    queue<int> q;
    while (m--)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    bool isEqual = true;

    if (st.size() != q.size())
    {
        isEqual = false;
    }
    else
    {
        while (!st.empty())
        {
            if (st.top() != q.front())
            {
                isEqual = false;
                break;
            }
            st.pop();
            q.pop();
        }
    }

    if (isEqual)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}