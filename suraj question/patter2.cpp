#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
//           Method -1
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n-i;j++)
    //     {
    //         cout<<" ";
    //     }
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
        while(j<=n-i)
        {
            cout<<" ";
            j++;
        }
        int count = i;
        int k=i;
        while(k>0)
        {
            cout<<count;
            count++;
            k--;
        }
        i++;
        cout<<endl;
    }      

}
