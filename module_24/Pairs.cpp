#include<bits/stdc++.h>
using namespace std;
class Student{
    public: 
        string name;
        int id;

        Student(string name, int id){
            this->name = name;
            this->id = id;
        }
};

class Cmp{
    public: 
        bool operator()(Student l, Student r){
            if(l.name > r.name)
                return true;
            else if(l.name < r.name)
                return false;
            else {
                return l.id < r.id;
            }
        }
};

int main(){
    priority_queue<Student, vector<Student>, Cmp> pq;
    int n; cin >> n;

    while(n--){
        string name;
        int id;
        cin >> name >> id;

        Student obj(name, id);
        pq.push(obj);
    }
    
    while(!pq.empty()){
        cout << pq.top().name << " " << pq.top().id << endl;
        pq.pop();
    }
    
    return 0;
}