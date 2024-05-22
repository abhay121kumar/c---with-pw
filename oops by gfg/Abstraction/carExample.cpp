#include<iostream>
using namespace std;
#include<bits/stdc++.h>

class Car{
    private:
    void working(){
        cout<<"Internal Working"<<endl;
    }
    void scruDriver(){
        cout<<"Number of scrudriver used"<<endl;
    }
    public:
    void company(){
        cout<<"company name"<<endl;
    }
    void brand(){
        cout<<"brand name"<<endl;
    }
};
int main(){
    Car c1;
    c1.brand();
    c1.company();
    // c1.working();not accessable
}