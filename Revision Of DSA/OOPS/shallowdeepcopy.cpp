#include<iostream>
using namespace std;
#include<cstring>

class Student{
    public:
    char *name;    
    int age;


    Student(char *name,int age){
        this->age = age;
        //shallow copy
        // this->name = name;
        //deep copy
        this->name = new char[strlen(name)+1];
        strcpy(this->name,name);
    }

    void print(){
        cout<<name<<endl;
        cout<<age<<endl;
    }
};

int main(){
    char name[] = "abcd";
    Student s1(name,20);
    s1.print();
    Student s2(name,24);
    s2.print();
    s2.name[1] = 'x';
    s1.print();
    s2.print();

    // Student s3 = s1;
    // s3.print();
    // s3.name[1] = 'w';
    // s3.print();
    // s1.print();
    return 0;
}