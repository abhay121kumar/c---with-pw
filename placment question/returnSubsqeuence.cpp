#include<iostream>
using namespace std;
#include<vector>

vector<string> solve(string name,int size){
    vector<string> ans;
    for(int i=0;i<size;i++){
        for(int j=size-1;j>=i;j--){
            string str = name.substr(i,j+1);
            ans.push_back(str);
        }
    }
    return ans;
}

int main(){
    // string name;
    // cin>>name;
    // int size = name.length();
    // cout<<size<<endl;
    // vector<string> output = solve(name,size);
    // for(int i=0;i<output.size();i++){
    //     cout<<output[i]<<" "<<endl;
    // }








    string text;
    cin>>text;
    string ans = text.substr(0,1);
    return 0;
}