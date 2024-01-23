#include<bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<string>> &ans,int n,int row,int col){
    int rowi = row;
    int coli = col;
    int i=0,j=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ans[rowi][j]=='Q') return false;
        } 
    }
    // for row traverse
    while(i<n){
        if(ans[rowi][i]=='Q') return false;
        i++;
    }
    //for col traverse
    while(j<n){
        if(ans[j][coli]=='Q') return false;
    }
    //for diagonal traverse
    
        
}
void solve(vector<vector<string>> &ans,int n,vector<string> &board,int col){
    if(col==n){
        ans.emplace_back(board);
        return;
    }
    for(int row=0;row<n;row++){
        if(isSafe(ans,n,row,col)){
            ans[row][col] = 'Q';
            solve(ans,n,board,col+1);
            ans[row][col] = '.';
        }
    }
}
vector<vector<string>> solveNQueens(int n) {
    vector<string> board(n);
    vector<vector<string>> ans;
    string s(n,'.');
    for(int i=0;i<n;i++){
        board[i] = s;
    }
    solve(ans,n,board,0);
    return ans;
}
int main(){
    return 0;
}