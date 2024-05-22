/*
Abstraction means displaying only essential information and hiding the details. 
*/
/*
real-life example of a man driving a car. The man only knows that pressing the accelerator will 
increase the speed of the car or applying brakes will stop the car but he does not know how on pressing 
the accelerator the speed is actually increasing, he does not know about the inner mechanism of the car or 
the implementation of the accelerator, brakes, etc in the car. This is what abstraction is.
*/
/*
Abstraction using Classes
Abstraction in Header files
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class implement{
    // Access specifiers are the main pillar of implementing abstraction in C++.
    private:
    int a,b;
    public:
    // void setValue(int x,int y){
    //     a = x;
    //     b = y;
    // }
    void setValue(int a,int b){
        this->a = a;
        this->b = b;
    }
    void getValue(){
        cout<<a<<" "<<b<<endl;
    }
};

int main(){
    implement e1;
    e1.setValue(2,3);
    e1.getValue();
    return 0;
}

// You can see in the above program we are not allowed to access the variables a and b directly, 
// however, one can call the function set() to set the values in a and b and the function display() to 
// display the values of a and b. 

