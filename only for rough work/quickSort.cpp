#include<iostream>
using namespace std;


int partition(int arr[],int low,int high){
    int i = low,j = high+1;
    int x = arr[low];
    do{
        do{
            i = i+1;
        }while(arr[i]<x && i<high);
        do{
            j = j - 1;
        }while(arr[j]>x);
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }while(i<j);
    swap(arr[low],arr[j]);
    return j;
}
void QuickSort(int arr[],int low,int high){
    if(low<high){
        int j = partition(arr,low,high);
        QuickSort(arr,low,j-1);
        QuickSort(arr,j+1,high);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}