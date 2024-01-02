#include<iostream>
using namespace std;

bool combinationLock(int* arr,int n){
    bool flag = false;
    for(int i=0;i<=(1<<n)-1;i++){
        int sum=0;
        for(int j=0;j<=(n-1);j++){
            if(i&(1<<j)){
                sum+=arr[j];
            }else{
                sum-=arr[j];
            }
        }
        if((sum%360)==0){
            cout<<i<<endl;
            flag=true;
            break;
        }
    }
    return flag;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = combinationLock(arr,n);
    if(ans){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}