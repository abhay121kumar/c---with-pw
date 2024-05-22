// A subset is a selection of elements from a set that may not necessarily be contiguous.

// Subsets can contain elements in any order and need not be contiguous.

// For example, in the set {1, 2, 3, 4}, both {2, 3} and {1, 3} are subsets.

// Subsets are commonly used in combinatorial problems, such as in permutations, combinations, 
// or in algorithms involving set operations.


#include<bits/stdc++.h>
using namespace std;

void subsetSum(vector<int> &arr,int n,int ind,vector<int> &ds,int sum){
    if(ind==n){
        ds.emplace_back(sum);
        return;
    }
    //take
    subsetSum(arr,n,ind+1,ds,sum+arr[ind]);
    //not take
    // cout<<"helo"<<endl;
    subsetSum(arr,n,ind+1,ds,sum);
    // return;
}

int main(){
    vector<int> arr = {3,1,2};
    vector<int> ds;
    subsetSum(arr,3,0,ds,0);
    for(auto it:ds){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<ds.size()<<" size"<<endl;
}