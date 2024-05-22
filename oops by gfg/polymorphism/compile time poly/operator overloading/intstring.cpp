#include<iostream>
using namespace std;

class ope{
    private:
    int a,b;
    string str1,str2;
    public:
    ope addI(int a,int b){
        this->a = a;
        this->b = b;
    }
    ope addS(string s1,string s2){
        str1 = s1;
        str2 = s2;
    }
    void add(){
        
    }
};