#include<iostream>
using namespace std;

class Student{
    public:
    int age;
    static int totalstudent;

    Student(int age){
        this->age = age;
        // this-> totalstudent = totalstudent;
    }
    void print(){
        // cout<<age<<"  "<<totalstudent<<endl;
        cout<<age<<"  "<<endl;
    }

    static int gettotal(int a){
        cout<<"hello"<<endl;
        totalstudent = a;
        return totalstudent;
    }
};

int Student :: totalstudent = 20;

int main(){
    Student s1(10);
    s1.print();
    cout<<Student::totalstudent<<endl;
    int as = Student :: gettotal(30);
    cout<<as<<endl;
}

