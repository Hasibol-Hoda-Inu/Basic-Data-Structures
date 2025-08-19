#include<bits/stdc++.h>
using namespace std;
class Student{
    public: 
        string name;
        int roll;
        int marks;

        Student(string name, int roll, int marks){
            this->name = name;
            this->roll = roll;
            this->marks = marks;
        }
};

class Cmp{
    public: 
        bool operator()(Student l, Student r){
            if(l.marks < r.marks)
                return true;
            else if(l.marks > r.marks)
                return false;
            else {
                return l.roll > r.roll;
            }
        }
};

int main(){
    priority_queue<Student, vector<Student>, Cmp> pq;

    int n; cin >> n;
    while(n--){
        string name; 
        int roll, marks;

        cin >> name;
        cin >> roll >> marks;

        Student obj(name, roll, marks);
        pq.push(obj);
    }

    int q; cin >> q;
    while(q--){
        int val; cin >> val;
        if(val == 0){
            string name;
            int roll, marks; 
            cin >> name >> roll >> marks;

            Student obj(name, roll, marks);
            pq.push(obj);

            if(pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;

        }else if(val == 1){
            if(pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;

        }else if(val == 2){
            if(!pq.empty()){
                pq.pop();
                if(!pq.empty())
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                else
                    cout << "Empty" << endl;
            }
            else
                cout << "Empty" << endl;
                
        }
    }




    return 0;
}