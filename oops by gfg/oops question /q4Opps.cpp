//  Write a C++ program to create a class called Car that has 
// private member variables for company, model, and year.
//  Implement member functions to get and set these variables.

#include<iostream>
using namespace std;
#include<bits/stdc++.h>

// This program demonstrates how to encapsulate data within a 
// class in C++ and provides member functions to interact with 
// the data. The Car class effectively models a car with 
// attributes for its company, model, and year.

class Car{
    private:
    char CompanyName[30];
    char ModelName[30];
    int Year;
    public:
    void setCompanyName(const char* CompanyName){
        strncpy(this->CompanyName,CompanyName,sizeof(this->CompanyName)-1);
        this->CompanyName[sizeof(this->CompanyName)-1] = '\0';
    }
    void setModelName(const char* ModelName){
        strncpy(this->ModelName,ModelName,sizeof(this->ModelName)-1);
        this->ModelName[sizeof(this->ModelName)-1] = '\0';
    }
    void setYear(int Year){
        this->Year = Year;
    }

    const char* getCompanyName(){
        return CompanyName;
    }
    const char* getModelName(){
        return ModelName;
    }
    int getYear() const{
        return Year;
    }
};

int main(){
    Car c1;
    c1.setCompanyName("HRS Group");
    c1.setModelName("TATA");
    c1.setYear(2024);
    cout<<c1.getCompanyName()<<endl;
    cout<<c1.getModelName()<<endl;
    cout<<c1.getYear()<<endl;
    return 0;
}