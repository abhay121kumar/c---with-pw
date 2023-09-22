#include<iostream>
using namespace std;

int minLenght(int n,int arr[]){
    int sum=0;
    int cur;
    for(int i=0;i<n-1;i++){
        cur = arr[i+1] - arr[i];
        sum+=cur;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<minLenght(n,arr)<<endl;
    return 0;
}