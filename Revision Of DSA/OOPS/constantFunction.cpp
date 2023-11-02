#include<iostream>
using namespace std;

class student{
    public:
    int age;
    int const totalstudent;

    student(int age){
        this->age = age;
    }

    student(int a) : totalstudent(a){
        a = totalstudent;
    }
    void print(){
        cout<<age<<" "<<totalstudent<<endl;
    }
};

