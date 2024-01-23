#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> bank = {"011001","000000","010100","001000"};
    for(int i=0;i<bank.size();i++){
        for(int j=0;j<bank[i].size();j++){
            cout<<bank[i][j]<<" ";
        }
        cout<<endl;
    }
}