#include<iostream>
using namespace std;
#include<algorithm>
#include<cmath>


// sourab question-oct. 27
int maxHeightTree(int* arr,int size){
    int height=0;
    sort(arr,arr+size);
    int sum = arr[0];

    while(height<sum){
        for(int i=0;i<size;i++){
            if(arr[i]>height){
                sum = arr[i];
                height +=arr[i];
            }
        }
    }
    return height;
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<maxHeightTree(arr,size)<<endl;
    return 0;
}