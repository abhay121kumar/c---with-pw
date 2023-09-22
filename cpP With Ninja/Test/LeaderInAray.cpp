/*
Leaders in array
Send Feedback
Given an integer array A of size n. Find and print all the leaders present in the input array. An array element A[i] is called Leader, if all the elements following it (i.e. present at its right) are less than or equal to A[i].
Print all the leader elements separated by space and in the same order they are present in the input array.
Input Format :
Line 1 : Integer n, size of array
Line 2 : Array A elements (separated by space)
Output Format :
 leaders of array (separated by space)
Constraints :
1 <= n <= 10^6
Sample Input 1 :
6
3 12 34 2 0 -1
Sample Output 1 :
34 2 0 -1
Sample Input 2 :
5
13 17 5 4 6
Sample Output 2 :
17 6

*/

#include <iostream>
using namespace std;

// void Leader(int arr[],int size)
// {
//     for(int i=0;i<size;i++)
//     {
//         for(int j=i;j<size;j++)
//         {
//             if(arr[i]<arr[j])
//             {
//                 break;
//             }
//             if(j==size-1)
//             {
//                 cout<<arr[i]<<" ";
//             }
//         }
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     Leader(arr,n);
//     return 0;
// }



// wrong code 

// void length(int arr[], int n)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         count++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     // cout<<count<<endl;
//     // return count;
// }

// int *Leader(int arr[], int size)
// {
//     int a[size];
//     int k = 0;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i; j < size; j++)
//         {
//             if (arr[i] < arr[j])
//             {
//                 break;
//             }
//             if (j == size - 1)
//             {
//                 a[k] = arr[i];
//                 k++;
//             }
//         }
//     }
//     // a[k] = '\0';
//     // cout << k << endl;
//     length(a, k);
//     return a;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int *ans = Leader(arr, n);
//     // cout<<"heelo"<<endl;
//     cout << ans[0] << endl;
//     for (int i = 0; ans[i] != '\0'; i++)
//     {
//         cout << ans[i] << " ";
//     }
//     delete[] ans;
//     return 0;
// }





 // method -2

void Leader(int arr[],int n)
{
    int max = arr[n-1];
    cout<<max<<" ";
    for(int i=n-1;i>0;i--)
    {
        if(arr[i]>max)
        {
            max = arr[i];
            cout<<max<<" ";
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Leader(arr,n);
    return 0;
}