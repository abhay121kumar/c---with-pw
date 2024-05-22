#include<iostream>
using namespace std;

class circle{
    private:
    int x;
    public:
    void setValue(){
        cin>>x;
    }
    void getValue(){
        cout<<3.144*x*x<<endl;
    }
};
int main(){
    circle c1;
    c1.setValue();
    c1.getValue();
}
//here x is data member and setValue,getValue is function member 