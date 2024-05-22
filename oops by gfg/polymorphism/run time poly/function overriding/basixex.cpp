#include<iostream>
using namespace std;

class Animal{
    public:
    void dog(){
        cout<<"black"<<endl;
    }
};
class child:public Animal{
    public:
    void dog(){
        cout<<"white"<<endl;
    }
};

int main(){
    Animal a1;
    a1.dog();
    child c1;
    c1.dog();
    Animal a2 = child();
    a2.dog();
}