#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        
        string s;
        getline(cin, s);

        stringstream ss(s);
        string word;

        string mx_word;
        int mx = 0;

        map<string, int> mp;

        while (ss >> word)
        {
            mp[word]++;
            if(mp[word] > mx){
                mx = mp[word];
                mx_word = word;
            }
        }

      
        cout << mx_word << " " << mx;

        cout << endl;
    }

    return 0;
}