#include<iostream>
using namespace std;
#include<vector>


/*
//m-1 time take 30min. to get this logic -1 inplace of duplicate member
vector<int> removeDuplicate(int* arr,int size){
    vector<int> newArr;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                arr[j] = -1;
            }else{
                continue;
            }
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]!=-1){
            newArr.push_back(arr[i]);
        }
    }
    return newArr;
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    vector<int> ans = removeDuplicate(arr,size);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}

*/

int removeDupli(int* arr,int size){
    if(size<0){
        return 0;
    }

}