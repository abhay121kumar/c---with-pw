#include<iostream>
using namespace std;

class Employee{
    string name;
    int age;
    public:
    Employee(string person,int umar){
        name = person;
        age = umar;
    }
    // error confusion
    // Employee(string name,int age){
    //     name = name;
    //     age = age;
    // }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
};

int main(){
    Employee e1("abhay",22);
    cout<<e1.getName()<<" "<<e1.getAge()<<endl;
    return 0;
}