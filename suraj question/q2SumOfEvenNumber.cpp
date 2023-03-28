//Given a number N, print sum of all even numbers from 1 to N.
//i/p:6
//o/p:12

#include<iostream>
using namespace std;
/*
int sum(int a)
{
    int ans=0;
    //method-1

    // for(int i=0; i<=a;i+=2)
    // {
    //     ans = ans+i;
    // }

    //metod-2
    // for(int i=0; i<=a;i++)
    // {
    //     if(i%2==0)
    //     ans = ans+i;
    // }

    //method-3
    // int i=0;
    // while(i<=a)
    // {
    //     if(i%2==0)
    //     ans+=i;
    //     i++;
    // }
    return ans;
}
*/
int main()
{
    int n;
    cin>>n;
    //method -4 without using function
    int i=0;
    int ans=0;
    while(i<=n)
    {
        if(i%2==0)
        ans+=i;
        i++;
    }
    cout << ans <<endl;

    //cout<<sum(n)<<endl;
    return 0;

}
