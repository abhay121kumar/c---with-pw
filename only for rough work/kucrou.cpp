/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Hello World";
    
    vector<int> ans = {1,8,2,3,4};
    cout<<ans.size();
     for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    // sort(ans.end(),ans.begin());
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
