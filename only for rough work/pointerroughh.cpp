#include<iostream>
using namespace std;

int main(){
    int a[5] = {10,20,30,40,50};
    int *ptr = a;
    cout<<ptr<<endl;//100
    cout<<ptr[0]<<endl;//10
    cout<<ptr[0]+1<<endl;//11
    cout<<ptr+1<<endl;
    cout<<*ptr<<endl;
    cout<<*ptr+1<<endl;
    return 0;
}