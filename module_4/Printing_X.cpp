#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mid = n / 2;
    int space = n - 2;

    for (int i = 0; i < mid; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "\\";

        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        cout << "/" << endl;

        space -= 2;
    }

    for (int i = 0; i < mid; i++)
    {
        cout << " ";
    }
    cout << "X" << endl;

    space = 1;
    for (int i = mid - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "/";

        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        cout << "\\" << endl;

        space += 2;
    }

    return 0;
}
