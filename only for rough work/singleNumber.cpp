#include<iostream>
#include<vector>
using namespace std;

int x=0;
int i=0;
int smallSingleNumber(int n[],int x,int i,int size)
{
    x = x ^ n[i+1];
    return x;
}
int SingleNumber(int a[],int size)
{
    if(size==1)
    {
        return a[0];
    }
    x = a[i] ^ a[i+1];
    // i = i+2;
    int ans = smallSingleNumber(a,x,i+2,size-1);
    return ans;
}
int main()
{
    int size;
    int a[size] = {4,1,2,1,2};
    cout<<SingleNumber(a,size)<<endl;
}


// correct answer 
// int singleNumber(vector<int>&single)
// {
//     int n = single.size();
//     if(n==1)
//     {
//         return single[0];
//     }
//     int x = single[0] ^ single[1];
//     for(int i=2;i<n;i++)
//     {
//         x = x ^ single[i];
//     }
//     return x;

// }

// int main()
// {
//     vector<int> nums = {4,1,2,1,2};
//     int x;
//     cout<<singleNumber(nums)<<endl;
// }