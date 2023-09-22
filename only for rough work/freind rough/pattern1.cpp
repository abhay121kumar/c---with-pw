#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0;
    int size;
    cout<<"array of size"<<endl;
    // cin>>size;
    int arr[100];
    int div=n,rem=0;
    while(div/2 != 0){
        rem  = div%2;
        
        arr[i]=rem;
        i++;

        div = div/2;
    }
    for(int j=0;j<100;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}