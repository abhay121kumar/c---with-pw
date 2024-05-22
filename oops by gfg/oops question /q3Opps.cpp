// Write a C++ program to create a class called Person that has 
// private member variables for name, age and country. 
// Implement member functions to set and get the values of these
// variables.

#include<iostream>
using namespace std;
#include<bits/stdc++.h>

// This program demonstrates how to encapsulate data within a 
// class in C++ and provides member functions to interact with 
// the data.


class Person{
    private:
    char name[30];
    int age;
    char country[30];
    public:
    //const char* name if i did not write const then give error
    void setName(const char* name){
        // this->name = name;//wrong
        strncpy(this->name,name,sizeof(this->name)-1);
        this->name[sizeof(this->name)-1] = '\0';
    }
    void setAge(const int age){
        this->age = age;
    }
    void setCountry(const char* country){
        // this->country = country;//we can not assign like that for char
        strncpy(this->country,country,sizeof(this->country)-1);
        this->country[sizeof(this->country)-1] = '\0';
    }
    
    const char* getName() const{
        return name;
    }
    int getAge() const{
        return age;
    }
    const char* getCountry() const{
        return country;
    }
};

int main(){
    Person p1;
    p1.setName("abhay");
    p1.setAge(25);
    p1.setCountry("india");
    cout<<p1.getName()<<endl;
    cout<<p1.getAge()<<endl;
    cout<<p1.getCountry()<<endl;
}