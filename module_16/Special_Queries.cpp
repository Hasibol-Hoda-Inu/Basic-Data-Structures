#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;

    int n;
    cin >> n;
    while (n--)
    {
        int m;
        cin >> m;
        if (m == 0)
        {
            string name;
            cin >> name;
            q.push(name);
        }
        else if (m == 1)
        {
            if (!q.empty())
            {
                string person = q.front();
                q.pop();
                cout << person << endl;
            }else 
                cout << "Invalid" << endl;
        }
    }

    return 0;
}