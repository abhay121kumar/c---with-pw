#include<bits/stdc++.h>
using namespace std;

    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<vector<int>> ans;
        for(int i=0;i<points.size();i++){
            vector<int> v;
            for(int j=0;j<points[i].size();j++){
                v.emplace_back(points[i][j]);
            }
            ans.emplace_back(v);
        }
        int k=0;
        while(k<points.size()){
            for(int i=0;i<points.size();i++){
                for(int j=0;j<points[i].size();j++){
                    if(ans[k][j]==points[i][j] && (k!=i)){
                        points[i][j] = -1;
                        ans[k][j] = -1;
                    }
                }
            }
            k++;
        }
        int count=0;
        for(int i=0;i<points.size();i++){
            bool flag = true;
            for(int j=0;j<points[i].size();j++){
                if(points[i][j]==-1 || ans[i][j]==-1){
                    flag = false;
                }
            }
            if(flag){
                count+=1;
            }
        }
        return count;
    }


int main()
{
    // cout<<"Hello World";
    // vector<vector<int>> points = {{3,1},{9,0},{1,0},{1,4},{5,3},{8,8}};
    vector<vector<int>> points = {{8,7},{9,9},{7,4},{9,7}};
    cout<<maxWidthOfVerticalArea(points)<<endl;
    // vector<vector<int>> ans;
    // for(int i=0;i<points.size();i++){
    //     vector<int> v;
    //     for(int j=0;j<points[i].size();j++){
    //         v.emplace_back(points[i][j]);
    //     }
    //     ans.emplace_back(v);
    // }
    // for(int i=0;i<points.size();i++){
    //     for(int j=0;j<points[i].size();j++){
    //         cout<<points[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}
