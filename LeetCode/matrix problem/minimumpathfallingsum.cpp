#include<bits/stdc++.h>
using namespace std;


void findMin(vector<vector<int>> &matrix,int n,int row,int col,int &minSum,vector<int>& ds){
        if(row>n || col>n || col<0){
            return;
        }
        ds.emplace_back(matrix[row][col]);
        if(ds.size()==n){
            int temp = accumulate(ds.begin(),ds.end(),0);
            for(auto it:ds){
                cout<<it<<" ";
            }
            // cout<<endl;
            cout<<temp<<endl;
            if(temp<minSum){
                minSum = temp;
            }
            ds.pop_back();
            return;
        }
        findMin(matrix,n,row+1,col-1,minSum,ds);
        findMin(matrix,n,row+1,col,minSum,ds);
        findMin(matrix,n,row+1,col+1,minSum,ds);
        ds.pop_back();
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int minSum = INT_MAX;
        int n = matrix.size();
        vector<int> ds;
        for(int i=0;i<n;i++){
            findMin(matrix,n,0,i,minSum,ds);
            ds.clear();
        }
        return minSum;
    }
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    vector<vector<int>> matrix;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            matrix.emplace_back(arr[i][j]);
        }
    }
    cout<<minFallingPathSum(matrix)<<endl;
    return 0;
}
//[[2,1,3],[6,5,4],[7,8,9]]