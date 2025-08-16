#include <bits/stdc++.h>
using namespace std;

void left_print(list<int> li)
{
    cout << "L -> ";
    for (int it : li)
    {
        cout << it << " ";
    }
    cout << endl;
}

void right_print(list<int> li)
{
    li.reverse();
    cout << "R -> ";
    for (int it : li)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> li;
    int size = -1;

    int t;
    cin >> t;
    while (t--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            li.push_front(v);
            size++;
        }
        else if (x == 1)
        {
            li.push_back(v);
            size++;
        }
        else if (x == 2 && v <= size)
        {
            li.erase(next(li.begin(), v));
            size--;
        }

        left_print(li);
        right_print(li);
    }

    return 0;
}