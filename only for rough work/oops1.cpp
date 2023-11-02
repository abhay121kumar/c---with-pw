#include<iostream>
using namespace std;

class Fraction{
    public:
    int num;
    int deno;

    Fraction(int num,int deno){
        this->num = num;
        this->deno = deno;
    }

    void print(){
        if(num==0){
            cout<<num<<endl;
        }else if(deno==1){
            cout<<num<<endl;
        }else{
            cout<<num<<"/"<<deno<<endl;
        }
    }

    void simplify(){
        if(num==0){
            deno=1;
            return;
        }
        int current = min(this->num,this->deno);
        while(current>1){
            if(this->num%current==0 && this->deno%current==0){
                num = this->num/current;
                deno = this->deno/current;
                break;
            }
            current-=1;
            // cout<<num<<" "<<deno<<endl;
        }
        this->num = num;
        this->deno = deno;
    }
};

int main(){
    Fraction f1(14,6);
    f1.print();
    f1.simplify();
    f1.print();
    return 0;
}