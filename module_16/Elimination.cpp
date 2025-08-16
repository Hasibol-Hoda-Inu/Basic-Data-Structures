#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;

        for (char c : s)
        {
            if (st.empty())
                st.push(c);
            else
            {
                if (c == '0')
                {
                    st.push(c);
                }
                else if (c == '1')
                {
                    if (st.top() != '0')
                        st.push(c);
                    else
                        st.pop();
                }
            }
        }

        cout << (st.empty() ? "YES" : "NO") << endl;
    }

    return 0;
}