#include<iostream>
#include<cstring>
using namespace std;

void columnSum(int input[100][100],int n,int m)
{
    int k=0;
    int arr[m];
    arr[0]=0;
    for(int j=0;j<m;j++)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum = sum +input[i][j];
        }
        arr[k] = sum;
        k++;
    }
    for(int l=0;l<m;l++)
    {
        cout<<arr[l]<<" ";
    }
    cout<<endl;
}

int main()
{
    int input[100][100];
    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>input[i][j];
        }
    }
    columnSum(input,n,m);
    return 0;
}