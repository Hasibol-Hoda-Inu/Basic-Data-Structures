#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;


    vector <int> freq(26, 0);
    for (size_t i = 0; i < str.size(); i++)
    {
        freq[str[i]-'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if(freq[i] != 0)
        cout << char(i+'a') << " " << ":" << " " << freq[i] << endl;
    }
    
    
    return 0;
}