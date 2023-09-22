// 1
// 11
// 202
// 3003
// 40004

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    int k=1;
    while(i<=n)
    {
        int j=1;
        do{
            cout<<i<<" ";
            j++;
        }while(j<=i);
        i++;
        i=i-k;
        cout<<endl;
    }
    return 0;
}