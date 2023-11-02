#include<iostream>
using namespace std;
#include<cstring>

class student{
    public:
    int age;
    char *name;

    student(int age,char *name){
        this->age = age;
        //shallow copy
        this->name = name;
        //deep copy
        this->name = new char[strlen(this->name)+1];
        strcpy(this->name,name);
    }

    //copy constructor
    student(student const &s1){
        this->age = s1.age;
        //shallow copy
        this->name = s1.name;
        //deep copy
        this->name = new char[strlen(s1.name)+1];
        strcpy(this->name,s1.name);
    }

    void print(){
        cout<<age<<" "<<name<<endl;
    }
};

int main(){
    // char *name = {'a','b','c','d','e'};
    char name[] = {'a','b','c','d','e'};
    student s1(10,name);
    s1.print();
    student s2(20,name);
    s2.name[1] = 'x';
    s2.print();
    s1.print();

    //copy constructor calling
    student s3(s1);
    s3.name[3] = 'z';
    s3.print();
    student s4 = s1;
    s4.name[2] = 'y';
    s4.print();
    s1.print();
}