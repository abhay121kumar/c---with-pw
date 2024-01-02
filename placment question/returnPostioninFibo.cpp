#include<iostream>
using namespace std;

int Position(int k){
    if(k==0 || k==1){
        return k;
    }
    int sum=0;
    bool flag = false;
    int a = 0;
    int b = 1;
    int count = 2;
    while(sum<=k){
        if(sum==k){
            flag = true;
            // count++;
            break;
        }
        sum = a+b;
        a = b;
        b = sum;
        count++;
    }
    if(flag){
        return count;
    }else{
        return -1;
    }
}

int main(){
    int k;
    cin>>k;
    cout<<Position(k)<<endl;
}