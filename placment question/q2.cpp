#include<iostream>
using namespace std;

int main(){
   
   char a[] = "abcded";
    cout<<a[1]<<endl;
    int n=4;
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n+1;j++){
            if(i==0 || j==0 || j==n || i==n-1){
                cout<<"*"<<" ";
            }else{
                cout<<a[k]<<" ";
                k++;
            }
        }
        cout<<endl;
    }
}

/*
print this pattern

* * * * * 
* a b c * 
* d e d * 
* * * * * 
*/