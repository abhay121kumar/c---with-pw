#include<iostream>
using namespace std;

class parent{
    public:
    virtual void car(){
        cout<<"in virtal fun"<<endl;
    }
    void print(){
        cout<<"in parent class in print fun"<<endl;
    }
};

class child:public parent{
    public:
    void car(){
        cout<<"in child class"<<endl;
    }
    void print(){
        cout<<"in child class in print fun"<<endl;
    }
};

int main(){
    parent p1;
    p1.car();
    p1.print();
    child c1;
    c1.car();
    c1.print();
    
    cout<<endl;
    parent *p2;
    child c2;
    p2 = &c2;
    p2->parent::car();
    // In the code provided, the line p2->parent::car(); is using the 
    // scope resolution operator (::) to explicitly call the car method from the parent class,
    //  even though p2 is a pointer to a parent object that actually points to an instance of the child class.
    p2->print();
}