#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> s;
    map<string,int> mpp;
    for(int i=0;i<3;i++){
        string str="abc";
        s.emplace_back(str);
    }
    for(int i=0;i<s.size();i++){
        mpp[s[i]]+=1;
    }
    cout<<s[0]<<endl;
    cout<<s[1]<<endl;
    cout<<s[2]<<endl;
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
}