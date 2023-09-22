#include<iostream>
using namespace std;
int shift(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    return n-1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n] = {1,2,3};
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    int small = shift(arr,n);
    cout<<"small"<<small<<endl;
     for(int i=0;i<small;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}