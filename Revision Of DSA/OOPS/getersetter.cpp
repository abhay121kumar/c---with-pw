#include<iostream>
using namespace std;

class Student{
    public:
    int rollNo;
    int age;

    private:
    char name;

    public:

    void display(){
        cout<<"rollNo "<<rollNo<<endl;
        cout<<"age "<<age<<endl;
        // cout<<name<<endl;
        cout<<name<<endl;
    }

    char get(char name){
        return name;
    }

    void set(char name){
        this-> name = name;
    }
};

int main(){
    Student s1;
    s1.rollNo = 10;
    s1.age = 20;
    s1.display();
    // s1.name = 'a'; // not able to access because of private variable 
    s1.set('a');
    s1.display();

}