#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int n1=2,n2=2;
    int k1=1,k2=3;
    int arr1[3] = {1,5,4};
    int arr2[5] = {1,2,8,9,3};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    for(int i=0;i<n1;i++)
    {
        for(int j1=0;j1<size1;j1++)
        {
            if(j1==k1)
            {
                cout<<arr1[k1];
            }
        }
        for(int j2=0;j2<size2;j2++)
        {
            if(j2==k2)
            {
                cout<<arr2[k2];
            }
        }
        cout<<endl;
    }
    return 0;
}