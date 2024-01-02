#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> words = {"abc","cba"};
    bool flag = true;
    unordered_map<char,int> mpp;
    if(words.size()==1){
        return true;
    }
    string str="";
    for(int i=0;i<words.size();i++){
        str += words[i]; 
    }
    for(int j=0;j<str.size();j++){
            mpp[str[j]]+=1;
    }
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<str<<endl;
    cout<<mpp.size()<<endl;
    // for(int i=0;i<str.size();i++){
    //     if(mpp[str[i]]/mpp.size()!=0){
    //         flag = false;
    //         break;
    //     }
    // }
    for(auto it:mpp){
        if((it.second%word.size())!=0){
            cout<<it.first<<" "<<it.second<<" "<<words.size()<<endl;
            cout<<it.second % mpp.size()<<"hello"<<endl;
            flag = false;
            break;
        }
        cout<<it.second<<" "<<mpp.size()<<endl;
    }
    cout<<flag<<endl;
    cout<<words.size()<<endl;
}