#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<=i;j++)
    //     {
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }
    int i=0;
    do
    {
        int j=0;
        do
        {
            cout<<" * ";
            j++;
        }while(j<=i);
        i++;
        cout<<endl;
    }while(i<n);
    
    return 0;
}