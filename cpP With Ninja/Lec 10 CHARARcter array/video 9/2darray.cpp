#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int input[100][100];
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>input[i][j];
        }
    }
    cout<<"row wise"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<input[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"column wise"<<endl;
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<m;i++)
        {
            cout<<input[i][j]<<" ";
        }
        cout<<endl;
    }
}