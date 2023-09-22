#include<iostream>
using namespace std;


int MissingNumber(int arr[],int n,int count,int i,int small)
{
    if(arr[i]==n)
    {
        return -1;
    }
    if(arr[i]==count+1)
    {
        count++;
    }
    else
    {
        count++;
        return count;
    }
    small = MissingNumber(arr,n,count,i+1,small);
    return small;
}
int main()
{
    int n;
    cin>>n;
    int arr[n] = {1,2,3,5,6,7,8,9,10};
    cout<<MissingNumber(arr,n,0,0,0)<<endl;
    return 0;
}