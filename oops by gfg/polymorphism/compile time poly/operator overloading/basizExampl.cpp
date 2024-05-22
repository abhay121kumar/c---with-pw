#include<iostream>
using namespace std;
#include<bits/stdc++.h>

class Complex{
    private:
    int real,imag;
    public:
    Complex(int real,int imag){
        this->real = real;
        this->imag = imag;
    }
    Complex(){
        
    }
    Complex operator+(Complex const& var){
        Complex c1;
        c1.real = real + var.real;
        c1.imag = imag + var.imag;
        return c1;
    }
    
    void print(){
        cout<<real<<" i"<<imag<<endl;
    }
};
int main(){
    Complex c1(10,20);
    Complex c2(1,2);
    Complex c3 = c1 + c2;
    c1.print();
    c2.print();
    c3.print();
}