#include<iostream>
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        int k=n-i;
        while(k>0)
        {
            for(int j=0;j<m;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
            k--;
        }
    }
    cout<<endl;

    return 0;
}