#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>

int kthpositive(vector<int> arr,int k){
    unordered_map<int,bool> ourMap;
    vector<int> help;
    int ans=0;
    for(int i=0;i<arr.size();i++){
        if(ourMap.count(arr[i])>0){
            continue;
        }
        ourMap[arr[i]] = true;
    }

    unordered_map<int,bool> :: iterator it1 = ourMap.begin();
    
    // while(it1 != ourMap.end()){
    //     cout<<"key "<<it1->first<<" "<<"second "<<it1->second<<endl;
    //     it1++;
    // }

    int k1=1;
    while(arr[arr.size()-1] != k1){
        if(ourMap.count(k1)==0){
            help.push_back(k1);
        }
        k1++;
    }

    // for(int i=0;i<help.size();i++){
    //     cout<<help[i]<<" ";
    // }

    int k2 = arr[arr.size()-1]+1;
    while(help.size()<=k){
        help.push_back(k2);
        k2++;
    }
    // cout<<endl;
    //  for(int i=0;i<help.size();i++){
    //     cout<<help[i]<<" ";
    // }
    // cout<<endl;
    return help[k-1];
}

int main(){
    vector<int> input;
    int n,k;
    cin>>n>>k;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        input.push_back(temp);
    }
    // for(int i=0;i<input.size();i++){
    //     cout<<input[i]<<" ";
    // }
    cout<<kthpositive(input,k)<<endl;
    return 0;
}