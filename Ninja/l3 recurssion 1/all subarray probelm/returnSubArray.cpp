// A subarray is a contiguous sequence of elements within an array.

// Subarrays maintain the order of elements as they appear in the original array.

// For example, in the array [1, 2, 3, 4], [2, 3] is a subarray, but [1, 3] is not because
//  the elements are not contiguous.

// Subarrays are primarily used in array-based algorithms, such as those involving 
// dynamic programming or sliding window techniques.

#include<iostream>
using namespace std;
#include<vector>
vector<vector<int>> findSubarray(vector<int> &nums){
    vector<vector<int>> ans;
    for(int i=0;i<nums.size();i++){
        for(int j=i;j<nums.size();j++){
            vector<int> ds;
            for(int k=i;k<=j;k++){
                ds.emplace_back(nums[k]);
            }
            ans.emplace_back(ds);
        }
    }
    return ans;
}
int main(){
    vector<int> nums;
    int arr[] = {1,2,3};
    for(auto it:arr){
        nums.emplace_back(it);
    }
    vector<vector<int>> result = findSubarray(nums);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}