/*
Rotate array
Send Feedback
You have been given a random integer array/list(ARR) of size N. Write a function that rotates the given array/list by D elements(towards the left).
 Note:
Change in the input array/list itself. You don't need to return or print the elements.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the array/list.

Second line contains 'N' single space separated integers representing the elements in the array/list.

Third line contains the value of 'D' by which the array/list needs to be rotated.
Output Format :
For each test case, print the rotated array/list in a row separated by a single space.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^4
0 <= N <= 10^6
0 <= D <= N
Time Limit: 1 sec
Sample Input 1:
1
7
1 2 3 4 5 6 7
2
Sample Output 1:
3 4 5 6 7 1 2
Sample Input 2:
2
7
1 2 3 4 5 6 7
0
4
1 2 3 4
2
Sample Output 2:
1 2 3 4 5 6 7
3 4 1 2

*/

#include<iostream>
using namespace std;

void RotateArray(int arr[],int n,int d)
{
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    int p=0;
    int q=n-d-1;
    while(p<=q)
    {
        int temp = arr[p];
        arr[p] = arr[q];
        arr[q] = temp;
        p++;
        q--;
    }
    int l=n-d;
    int m=n-1;
    while(l<=m)
    {
        int temp = arr[l];
        arr[l] = arr[m];
        arr[m] = temp;
        l++;
        m--;
    }
}

int main()
{
    int n,r;
    cout<<"Enter size of an array "<<endl;
    cin>>n;

    cout<<"Enter the index number from where you want to rotate "<<endl;
    cin>>r;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    RotateArray(arr,n,r);
    cout<<"Updated array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
/*
void RotateArray(int arr1[],int n,int r)
{
    int arr2[n];
    int i=0;
    int j=0;
    for(int k=0;k<r;k++)
    {
        arr2[k] = arr1[i];
        i++;
    }
    for(j=0;j<n-r;j++)
    {
        arr1[j] = arr1[j+r];  // changes is here
    }
    for(int q=0;q<=n-j;q++)
    {
        arr1[j] = arr2[q];
        j++;
    }
    return;
}

int main()
{
    int n,r;
    cout<<"Enter size of an array "<<endl;
    cin>>n;

    cout<<"Enter the index number from where you want to rotate "<<endl;
    cin>>r;
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    RotateArray(arr1,n,r);
    cout<<"Updated array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    return 0;
}

*/



/*
void ShiftArray(int arr1[],int n)
{
    int temp = arr1[0];
    for(int i=0;i<n-1;i++)
    {
        arr1[i] = arr1[i+1];
    }
    arr1[n-1] = temp;
}


void RotateArray(int arr1[],int n,int r)
{
    for(int i=0;i<r;i++)
    {
        ShiftArray(arr1,n);
    }
    return;
}

int main()
{
    int n,r;
    cout<<"Enter size of an array "<<endl;
    cin>>n;

    cout<<"Enter the index number from where you want to rotate "<<endl;
    cin>>r;
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    RotateArray(arr1,n,r);
    cout<<"Updated array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    return 0;
}
*/











// My method 
// void RotateArray(int arr1[],int arr2[],int n,int r,int i,int j,int k)
// {
//     if(j==n)
//     {
//         return;
//     }
//     if(j==r)
//     {
//         while(j<n)
//         {
//             arr2[k] = arr1[j];
//             j++;
//             k++;
//         }
//         while(i<r)
//         {
//             arr2[k] = arr1[i];
//             i++;
//             k++;
//         }
//     }
//     else
//     {
//         j++;
//     }
//     RotateArray(arr1,arr2,n,r,i,j,k);
// }




 // Divanshu method 

// void RotateArray(int arr1[],int arr2[],int n,int r,int i,int k)
// {
//     int j=r;
//     while(j<n)
//     {
//         arr2[k] = arr1[j];
//         j++;
//         k++;
//     }
//     while(i<r)
//     {
//         arr2[k] = arr1[i];
//         i++;
//         k++;
//     }
// }

// int main()
// {
//     int n,r;
//     cout<<"Enter size of an array "<<endl;
//     cin>>n;

//     cout<<"Enter the index number from where you want to rotate "<<endl;
//     cin>>r;
//     int arr1[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr1[i];
//     }
//     int arr2[n];
//     RotateArray(arr1,arr2,n,r,0,0);
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr2[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
