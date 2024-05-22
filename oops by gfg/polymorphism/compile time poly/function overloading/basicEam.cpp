#include<iostream>
using namespace std;

class functionOverloading{
    public:
    void fun(int a){
        cout<<"integer"<<" "<<a<<endl;
    }
    void fun(double a){
        cout<<"double"<<" "<<a<<endl;
    }
    void fun(string s){
        cout<<"string"<<" "<<s<<endl;
    }
    void fun(int a,int b){
        cout<<"two integer"<<" "<<a<<" "<<b<<endl;
    }
};
int main(){
    functionOverloading f1;
    f1.fun(10);
    f1.fun("abhay");
    f1.fun(2,3);
    f1.fun(2.3455);
}