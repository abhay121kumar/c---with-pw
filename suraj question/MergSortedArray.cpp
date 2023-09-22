#include<iostream>
using namespace std;

/*
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
*/


int InsertShift(int arr[], int sfrom, int eTo,int arr2[],int n){
     for(int i = eTo; i>=sfrom; i--){
          arr[i] = arr[i-1];
     }
     arr[sfrom] = arr2[n];
    return eTo+1;
}

void MergSorted(int arr1[],int arr2[],int m,int n)
{
    int small;
    int i=0;
    int j=0;
    while(i !=0 && j !=0)
    {
        // arr1[m]=arr2[n];
        if(arr1[i]>arr2[j])
        {
            small = InsertShift(arr1,i,m+n,arr2,n);
            i++;
            j++;
        }

    }
}