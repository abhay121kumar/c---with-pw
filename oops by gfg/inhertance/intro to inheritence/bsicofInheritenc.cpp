// the ability of class to derive the property and chareteristic
// from another class is called inheritence

#include<iostream>
using namespace std;
#include<bits/stdc++.h>

class people{
    private:
    int id;
    char name[30];
    public:
    void set_p(){
        cout<<"enter id and name"<<endl;
        cin>>id;
        cin>>name;
    }
    void display_p(){
        cout<<id<<" "<<name<<" "<<endl;
    }
};

class student : private people{
    private:
    int fee;
    char course[30];
    public:
    void set_s(){
        set_p();
        cout<<"enter fee & course"<<endl;
        cin>>fee;
        cin>>course;
    }
    void display_s(){
        display_p();
        cout<<fee<<" "<<course<<" "<<endl;
    }
};

int main(){
    student s1;
    s1.set_s();
    s1.display_s();
    // people p1;
    // p1.set_p();
    // p1.display_p();
    return 0;
}