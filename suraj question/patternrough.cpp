#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=n;i>0;i--)
    {
        
        for(int j=1;j<=i-1;j++)
        {
            cout<<" ";
        }
        for(int k=i;k<=n;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
// 4
//    *
//   **
//  ***
// ****