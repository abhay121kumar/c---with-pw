#include<iostream>
using namespace std;



void Merge(int arr[],int newArr[],int low,int mid,int high){
    int i=low,j=mid+1,k=low;
   
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            newArr[k] = arr[i];
            i++;
        }
        else{
            newArr[k] = arr[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=high){
            newArr[k] = arr[j];
            j++;
            k++;
        }
    }
    else{
        while(i<=mid){
            newArr[k] = arr[i];
            i++;
            k++;
        }
    }

    for(int p=0;p<=high;p++){
        arr[p] = newArr[p];
    }
}
void MergeSort(int arr[],int newArr[],int low,int high){
    if(low<high){
        int mid = (low+high)/2;
        MergeSort(arr,newArr,low,mid);
        MergeSort(arr,newArr,mid+1,high);
        Merge(arr,newArr,low,mid,high);
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    int newArr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    MergeSort(arr,newArr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}