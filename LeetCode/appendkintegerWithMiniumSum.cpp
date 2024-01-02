#include<iostream>
using namespace std;
#include<vector>
#include<map>

long long minimalKSum(vector<int>& nums, int k) {
        map<int,int> ourMap;
        int temp = 0;
        int j=1;
        for(int i=0;i<nums.size();i++){
            if(ourMap.count(nums[i])>0){
                continue;
            }
            ourMap[nums[i]] = 1;
            temp+=j;
            k--;
            j++;
        }
        while(k>0){
            if(ourMap.count(i)>0){
                i++;
                continue;
            }
            // cout<<temp<<endl;
        }
        return temp;
    }

    int main(){
        // vector<int> nums = {1,4,25,10,25};
        vector<int> nums = {5,6};
        int k=6;
        cout<<minimalKSum(nums,k)<<endl;
        return 0;
    }

    /*
    
    nums = [1,4,25,10,25], k = 2
Output: 5*/