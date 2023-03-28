#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //Method -1
    // for(int i=1;i<=n;i++)
    // {
    //     int count = i;
    //     for(int j=i;j>0;j--)
    //     {
    //         cout<<count;
    //         count++;
    //     }
    //     cout<<endl;
    // }

    // Method -2
    int i=1;
    while(i<=n)
    {
        int j=1;
        int count = i;
        while(j<=i)
        {
            cout<<count;
            j++;
            count++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}