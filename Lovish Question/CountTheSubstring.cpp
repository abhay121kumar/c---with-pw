#include<iostream>
#include<cstring>
using namespace std;
//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
/*
    int countSt(string S, int n, int i)
    {
        if(i==n) return 0;
        int l =0;
        int u =0;
        int count=0;
        for(int j=i; j<n; j++){
            if(isupper(S[j])){
                u++;
            }
            else{
                l++;
            }
            if(l == u){
                count++;
            }
        }
        count+= countSt(S,n, i+1);
        return count;
    }    
  

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        // countSt(S, S.length(), 0);
        cout<<countSt(S, S.length(), 0)<<endl;
    }
}  

*/

// ************************************************************* Method -2

// Dipanshu Code
int countSt(string S)
{
    int u=0, l=0, x=0;
    for(int i=0; i<S.length(); i++){
        for(int j=i; j<S.length(); j++){
            if(isupper(S[j])){
                u++;
            }else{
                l++;
            }
            if(u==l) x++;
        }
        u=l=0;
    }
    return x;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        cout<<countSt(S)<<endl;
    }
} 