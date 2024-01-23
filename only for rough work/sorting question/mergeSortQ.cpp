#include<bits/stdc++.h>
using namespace std;
// 1 1 4 6  // 0 1 5 7
// 0 1 4 6 // 1 1 5 7
// 0 1 4 6 // 1 1 5 7
// 0 1 1 6 // 4 1 5 7
void merge(vector<int> &arr,int l,int h,int mid){
    int i=0;
    int j = mid+1;
    while(i<mid && j<h){
        if(arr[i]<=arr[j]){
            i++;
        }else{
            swap(arr[i],arr[j]);
            i++;
        }
    }
}
void mergeSort(vector<int> &arr,int low,int high){
    if(low>high){
        return;
    }
    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,high,mid);
}