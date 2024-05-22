#include<iostream>
using namespace std;

class Employee{
    string name;
    int age;
    public:
    // Employee(string name,int age){
    //     this->name = name;
    //     this->age = age;
    // }
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }

    void setAge(int age){
        this->age = age;
    }
    int getAge(){
        return age;
    }
};

int main(){
    // Employee e1("abhay",22);
    // cout<<e1.getName()<<" "<<e1.getAge()<<endl;
    Employee e2;
    e2.setName("kumar");
    e2.setAge(24);
    cout<<e2.getName()<<" "<<e2.getAge()<<endl;
    return 0;
}