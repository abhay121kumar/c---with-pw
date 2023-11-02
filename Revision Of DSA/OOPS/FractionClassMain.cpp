#include<iostream>
using namespace std;

class Fraction{
    private:
    int num,deno;

    public:
    Fraction(int num,int deno){
        this->num = num;
        this->deno = deno;
    }

    void print(){
        cout<<num<<"/"<<deno<<endl;
    }

    void add(Fraction f2){
        int x = num*f2.deno;
        int y = f2.num * deno;
        int lcm = deno*f2.deno;
        int sum = x+y;
        this->num = sum;
        this->deno = lcm;
    }

    void simplify(){
        int minimum = min(this->num,this->deno);
        int x = 2;
        while(x<=minimum){
            if(num%x==0 && deno%x==0){
                this->num = num/x;
                this->deno = deno/x;
            }
            minimum = min(this->num,this->deno);
            x++;
            // cout<<"heloo "<<endl;
        }
        // cout<<num<<" "<<deno<<endl;
    }
};

int main(){
    Fraction f1(4,2);
    f1.print();
    Fraction f2(7,8);
    f2.print();
    f1.add(f2);
    f1.print();
    f1.simplify();
    f1.print();
    return 0;
}