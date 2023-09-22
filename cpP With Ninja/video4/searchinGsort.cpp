#include<iostream>
using namespace std;

// Method -1
// void SearchingSort(int arr[],int n,int k)
// {
   
//     for(int i=0;i<n-1;i++)
//     {
//         int min = arr[i];
//         int minIndex = i;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[j]<min)
//             {
//                 min = arr[j];
//                 minIndex = j;
//             }
//         }
//         int temp = arr[i];
//         arr[i] = arr[minIndex];
//         arr[minIndex] = temp;
//     }
// }

// My Method -2
void SearchingSort(int arr[],int n)
{
    if(n<0)
    {
        return;
    }
    int min = arr[0];
    int minIndex = 0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
            minIndex = i;
        }
    }
    int temp = arr[0];
    arr[0] = min;
    arr[minIndex] = temp;
    SearchingSort(arr+1,n-1);
}

int main()
{
    int n;
    cout<<"Enter size of the arr"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    SearchingSort(arr,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}