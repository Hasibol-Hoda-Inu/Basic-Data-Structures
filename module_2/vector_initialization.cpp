#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v(10, -2);

    int arr[10] = {0};

    vector <int> v2(arr, arr+10); // copying v in v2
   
    for (int i = 0; i < v.size(); i++)
    {
        cout << v2[i] << endl;
    }
    
    return 0;
}