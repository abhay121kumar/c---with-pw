#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<unordered_map>

using namespace std;

int main(){
    string s = "aaccaa";
    unordered_map<char,int> mpp;
    for(auto it:s){
        mpp[it]+=1;
    }
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    for(int i=0;i<s.length();i++){
        if(mpp.count(s[i])>0){
            
        }
    }
    cout<<"jns"<<endl;
    int k=2;
    // for(auto it:s){
    //     if(k>0){
    //         mpp[it]-=1;
    //         k--;
    //     }
    // }
    // for(auto it:mpp){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    for(int i=0;i<s.size();i++){
        mpp[s[i]]-=k;
    }
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    // string s1;
    // for(auto it:mpp){
    //     s1+=it.first;
    //     // s1+='it.second';
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    // for(auto it:mpp){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    // cout<<s1<<endl;
    // string s2 = "ab344ce";
    // cout<<s2<<endl;
    // s2+='4';
    // cout<<s2<<endl;

}