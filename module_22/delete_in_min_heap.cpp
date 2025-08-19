#include <bits/stdc++.h>
using namespace std;

void input_in_max_heap(vector<int> &v, int val)
{
    v.push_back(val);

    int crnt_idx = v.size() - 1;
    while (crnt_idx != 0)
    {
        int p_idx = (crnt_idx - 1) / 2;

        if (v[p_idx] > v[crnt_idx])
            swap(v[p_idx], v[crnt_idx]);
        else
            return;

        crnt_idx = p_idx;
    }
}

void print(vector<int> v)
{
    for (int i : v)
        cout << i << " ";
}

void delete_heap(vector<int> &v)
{
    v[0] = v.back();
    v.pop_back();

    int crnt_idx = 0;

    while (true)
    {
        int left_idx = crnt_idx * 2 + 1;
        int right_idx = crnt_idx * 2 + 2;

        int left_val = INT_MAX, right_val = INT_MAX;

        if (left_idx < v.size())
            left_val = v[left_idx];

        if (right_idx < v.size())
            right_val = v[right_idx];


        if (left_val <= right_val && left_val < v[crnt_idx])
        {
            swap(v[left_idx], v[crnt_idx]);
            crnt_idx = left_idx;
        }
        else if (right_val < left_val && right_val < v[crnt_idx])
        {
            swap(v[right_idx], v[crnt_idx]);
            crnt_idx = right_idx;
        }
        else
            break;
        
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    while (n--)
    {
        int val;
        cin >> val;
        input_in_max_heap(v, val);
    }

    print(v);
    cout << endl;
    delete_heap(v);
    print(v);

    return 0;
}