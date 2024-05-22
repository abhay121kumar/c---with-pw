// Write a C++ program to implement a class called Employee that 
// has private member variables for name, employee ID, and salary.
//  Include member functions to calculate and set salary based
//  on employee performance.

#include<iostream>
using namespace std;
#include<bits/stdc++.h>

class Employee{
    private:
    char name[20];
    string employeeID;
    double salary;
    public:
    Employee(const char* name,string employeeID,double salary){
        strncpy(this->name,name,sizeof(this->name)-1);
        this->name[sizeof(this->name)-1] = '\0';
        this->employeeID = employeeID;
        this->salary = salary;
    }
    void setName(const char* name){
        strncpy(this->name,name,sizeof(this->name)-1);
        this->name[sizeof(this->name)-1] = '\0';
    }
    void setEmployeeID(const string& employeeID){
        this->employeeID = employeeID;
    }
    void setSalary(double salary){
        this->salary = salary;
    }
    const char* getName(){
        return name;
    }
    const string getEmployeeID(){
        return employeeID;
    }
    double getSalary() const{
        return salary;
    }

    void calBasedonPerformance(double rating){
        if(rating>7.2){
            salary+=salary*0.50;//50% bonus
        }else if(rating>4.5){
            salary+=salary*0.10;//10% bonus
        }else if(rating>2.5){
            salary+=salary*0.02;//2% bonus
        }else{
            cout<<"No bonus for rating smaller then 2.5"<<endl;
        }
    }
};

int main(){
    Employee e1("Abhay","20bcs9222",100);
    cout<<e1.getName()<<endl;
    cout<<e1.getEmployeeID()<<endl;
    cout<<e1.getSalary()<<endl;
    e1.calBasedonPerformance(6.7);
    cout<<e1.getSalary()<<endl;
    e1.calBasedonPerformance(1.7);
    cout<<e1.getSalary()<<endl;
    return 0;
}
