/*
Code Merge Two Sorted Arrays
Send Feedback
You have been given two sorted arrays/lists(ARR1 and ARR2) of size N and M respectively, merge them into a third array/list such that the third array is also sorted.
Input Format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the first array/list.

Second line contains 'N' single space separated integers representing the elements of the first array/list.

Third line contains an integer 'M' representing the size of the second array/list.

Fourth line contains 'M' single space separated integers representing the elements of the second array/list.
Output Format :
For each test case, print the sorted array/list(of size N + M) in a single row, separated by a single space.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
0 <= M <= 10^5
Time Limit: 1 sec 
Sample Input 1 :
1
5
1 3 4 7 11
4
2 4 6 13
Sample Output 1 :
1 2 3 4 4 6 7 11 13 
Sample Input 2 :
2
3
10 100 500
7
4 7 9 25 30 300 450
4
7 45 89 90
0
Sample Output 2 :
4 7 9 10 25 30 100 300 450 500
7 45 89 90

*/

#include <iostream>
using namespace std;

void MergeTwoSorted(int arr1[],int arr2[],int arr3[],int i,int j,int k,int n1,int n2,int n3)
{
    if(k > n3-1)
    {
        return;
    }
    if(i>n1-1 && j<n2)
    {
        for(int p=j;p<n2;p++)
        {
            arr3[k] = arr2[p];
            k++;
            // j++;
        }
        return;
    }
    else if(j>n2-1 && i<n1)
    {
        for(int q=i;q<n1;q++)
        {
            arr3[k] = arr1[q];
            k++;
            // i++;
        }
        return;
    }
    else if(arr1[i]>arr2[j])
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    else
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    MergeTwoSorted(arr1,arr2,arr3,i,j,k,n1,n2,n3);
}


int main()
{
    int n1,n2,n3;
    cout<<"Enter the size of the two array: "<<endl;
    cin>>n1>>n2;
    n3 = n1 + n2;
    int arr1[n1],arr2[n2],arr3[n3];
    cout<<"Enter the array 1 element: "<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the array 2 element: "<<endl;
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    MergeTwoSorted(arr1,arr2,arr3,0,0,0,n1,n2,n3);
    for(int i=0;i<n3;i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    return 0;
}
// Method -2


// void MergeTwoSorted(int arr1[],int arr2[],int arr3[],int n1,int n2,int n3)
// {
//     int i=0,j=0,k=0;
//     while(i<n1 && j<n2 && k<n3){
//         if(arr1[i]<=arr2[j]){
//             arr3[k] = arr1[i];
//             i++;
//             k++;
//         }else{
//             arr3[k] = arr2[j];
//             k++;
//             j++;
//         }
//     }
//     if(i>=n1){
//         while(j<n2){
//             arr3[k] = arr2[j];
//             k++;
//             j++;
//         }
//     }else if(j<n2){
//         while(i<n1){
//             arr3[k] = arr1[i];
//             k++;
//             i++;
//         }
//     }
// }

// method-3 - incomplete

// void MergeTwoSorted(int arr1[],int arr2[],int arr3[],int n1,int n2,int n3)
// {
//     int i=0,j=0,k=0,p=0;
//     while(k<n3)
//     {
//         while(p<n1 && p<n2)
//         {
//             if(arr1[i]<arr2[j])
//             {
//                 arr3[k] = arr1[i];
//                 i++;
//                 k++;
//             }
//             else if(arr1[])
//             {
//                 arr3[k] = arr2[j];
//                 j++;
//                 k++;
//             }

//             p++;
//         }
//         if(i>n1-1 && j<n2)
//         {
//             while(i<n1)
//             {
//                 arr3[k] = arr1[i];
//                 i++;
//                 k++;
//             }
//             break;
//         }
//         else if(j>n2-1 && i<n1)
//         {
//             while(j<n2)
//             {
//                 arr3[k] = arr1[j];
//                 j++;
//                 k++;
//             }
//             break;
//         }
//     }
// }

// int main()
// {
//     int n1,n2,n3;
//     cout<<"Enter the size of the two array: "<<endl;
//     cin>>n1>>n2;
//     n3 = n1 + n2;
//     int arr1[n1],arr2[n2],arr3[n3];
//     cout<<"Enter the array 1 element: "<<endl;
//     for(int i=0;i<n1;i++)
//     {
//         cin>>arr1[i];
//     }
//     cout<<"Enter the array 2 element: "<<endl;
//     for(int i=0;i<n2;i++)
//     {
//         cin>>arr2[i];
//     }
//     MergeTwoSorted(arr1,arr2,arr3,n1,n2,n3);
//     for(int i=0;i<n3;i++)
//     {
//         cout<<arr3[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

