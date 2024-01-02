#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int,int> mpp;
        for(auto it:nums){
            mpp[it]+=1;
        }
        set<int> s;
        for(auto it:nums){
            s.insert(it);
        }
        while(!mpp.empty()){
            vector<int> temp;
            for(auto it:s){
                if (mpp.find(it) != mpp.end()) {
                temp.emplace_back(it);
                mpp[it]--;  
                } 
            }
            ans.emplace_back(temp);
            temp.clear();
            cout<<"hello"<<endl;
        }
        return ans;
    }
    int main(){
        vector<int> input = {1,3,4,1,2,3,1};
        vector<vector<int>> result = findMatrix(input);
        for(auto it:result){
            for(auto it1:it){
                cout<<it1<<" ";
            }
            cout<<endl;
        }
    }