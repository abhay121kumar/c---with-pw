#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int temp = target;
        unordered_map<int,int> ourMap;
        for(int i=0;i<nums.size();i++){
            if(ourMap.count(nums[i]>0)){
                continue;
            }
            ourMap[nums[i]] = 1;
        }
        int i=0;
        while(temp!=0 && i<nums.size()){
            if(nums[i]<=temp){
               temp = target-nums[i];
               ans.push_back(i);
               ourMap[temp] -= 1;
            cout<<ourMap[temp]<<endl;
            //    cout<<ourMap[nums[i]]<<endl;
            }
            if(ourMap.count(temp)>0){
                // cout<<ourMap.count(temp)<<endl;
                // cout<<temp<<endl;
                i++;
                continue;
            }else{
                temp=target;
                i++;
                cout<<"helo"<<endl;
                if(temp!=0){
                    cout<<"hello"<<endl;
                    ans.clear();
                }
            }
        }
        return ans;
    }

    int main(){
        vector<int> input = {3,2,4};
        int target = 6;
        vector<int> output = twoSum(input,target);
        for(int i=0;i<output.size();i++){
            cout<<output[i]<<" ";
        }
        cout<<endl;
        return 0;
    }