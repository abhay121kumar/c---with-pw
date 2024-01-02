#include<iostream>
using namespace std;
#include<vector>
// #include<map>
#include<unordered_map>

/*
bool checkPalindrome(char* input1,int size1,int i,int j){
    bool flag = false;
    while(i<j){
        if(input1[i]==input1[j]){
            flag = true;
        }else{
            flag = false;
            break;
        }
    }
    return flag;
}

bool checkRearange(char* input1,int size1,int i,int j){
    int k=i;
    bool flag = false;
    while(k!=j){
        while(i<j){
            input1[i] = input1[i+1];
            i++;
        }
        bool ans = checkPalindrome(input1,size1,i,j);
        if(ans){
            flag = true;
            break;
        }else{
            k++;
        }
    }
    return flag;
}

string modify(char* input1,int size1,int i,int j){
    map<char,int> ourMap;
    for(int i=0;i<size1;i++){
        if(ourMap.count(input1[i])>0){
            ourMap[input1[i]]+=1;
            continue;
        }
        ourMap[input1[i]] = 1;
    }
    
}

vector<int> qeuery(char* input1,int size1,int** input,int size2){
    vector<int> ans;

}

int main(){

    vector<char> input1;
    int size1;
    cin>>size1;
    for(int i=0;i<size1;i++){
        cin>>input1[i];
    }

    vector<vector<int>> input2(2, vector<int>(2));
    for(int i=0;i<input2.size();i++){
        for(int j=0;j<input2[i].size();j++){
            cin>>input2[i][j];
        }
    }

    for(int i=0;i<input2.size();i++){
        for(int j=0;j<input2[i].size();j++){
            cout<<input2[i][j]<<" ";
        }
        cout<<endl;
    }




    // int size1;
    // cin>>size1;
    // char input[size1];
    // for(int i=0;i<size1;i++){
    //     cin>>input[i];
    // }
    // // for(int i=0;i<4;i++){
    // //     cout<<input[i]<<" ";
    // // }
    // int n,m;
    // cin>>n>>m;
    // int input2[n][m];
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin>>input2[i][j];
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<input2[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}

*/

// int main(){
//     string s="abadabcd";
//     vector<vector<int>> v{{1,3},{2,5}};
//     vector<int> ans;
//     for(int i=0;i<v.size();i++){
//         int j=v[i][0]-1;, k
//     }
//     return 0;
// }

int getPairwithDifferncek(int *arr,int n,int k){
    unordered_map<int,int> map1;
    for(int i=0;i<n;i++){
        map1[arr[i]]++;
    }

    int pairCount=0;
    for(int i=0;i<n;i++){
        if(map1[k+arr[i]]>0){
            if(!k){
                map1[k+arr[i]] -=1;
            }
            pairCount += map1[(k+arr[i])];
        }
    }
    return pairCount;
}