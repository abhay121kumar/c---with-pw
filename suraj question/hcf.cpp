/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<limits.h>
using namespace std;

int main()
{
    // cout<<"Hello World";
    int n,m;
    cin>>n>>m;
    // int ans = INT_MIN;
    while(true){
    int ans = m%n;
    // cout<<"m"<<m<<endl;
        // cout<<"ans"<<ans<<endl;
        if(ans == 0){
            break;
            // cout<<"aaya kya"<<endl;
        }
        else{
            m = n;
            n = ans;
        }
    }
    // cout<<gcd(n,m)<<endl;
    cout<<n<<endl;
    return 0;
}
