#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1, str2;
    cin >> str1 >> str2;

    for (int i = 0; i < str1.length(); i++)
    {
        if(str1[i] > 96){
            str1[i] -= 32;
        }

        if(str2[i] > 96){
            str2[i] -= 32;
        }
       
        // cout << str1[i] << " " << str2[i] << endl; 

        if(str1[i] < str2[i]){
            cout << -1;
            return 0;
        }else if(str1[i] > str2[i]){
            cout << 1;
            return 0;
        }
        
    }
        cout << 0;
    
    return 0;
}