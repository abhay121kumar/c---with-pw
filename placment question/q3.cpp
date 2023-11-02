#include<iostream>
using namespace std;

int sumDigit(int* arr,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        int temp = 0;
        for(int j=0;j<size;j++){
            temp = temp + arr[j]*j;
        }
        int temp1 = arr[0];
        for(int j=0;j<size-1;j++){
            arr[j] = arr[j+1];
        }
        arr[size-1] = temp1;
        if(sum<temp){
            sum = temp;
        }
    }
    return sum;
}

int main(){
    int size;
    cout<<"enter the size of the arrY"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    // cout<<"hello"<<endl;
    cout<<sumDigit(arr,size)<<endl;
    return 0;
}