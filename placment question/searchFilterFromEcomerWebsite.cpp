#include<bits/stdc++.h>
using namespace std;

vector<vector<pair<int,int>>> solve(int n,vector<pair<int,int>> ps,int m,vector<pair<int,int>> pr){
    vector<vector<pair<int,int>>> ans;
    for(int i=0;i<pr.size();i++){
        vector<pair<int,int>> ds;
        for(int j=0;j<ps.size();j++){
            if(ps[j].first>=pr[i].first && ps[j].first<=pr[i].second){
                ds.emplace_back(ps[j]);
            }
        }
        sort(ds.begin(),ds.end());
        ans.emplace_back(ds);
    }
    return ans;
}

int main(){
    int n=6,m=5;
    vector<pair<int,int>> ps = {{22,10},{22,13},{9,18},{10,10},{12,4},{11,21}};
    vector<pair<int,int>> pr = {{2,14},{12,17},{7,22},{24,28},{9,11}};
    vector<vector<pair<int,int>>> result = solve(n,ps,m,pr);
    for(int i=0;i<result.size();i++){
        cout<<result[i].size()<<" mobiles are available"<<endl;
        for(int j=0;j<result[i].size();j++){
            cout<<"Price "<<result[i][j].first<<" "<<"Speed "<<result[i][j].second<<endl;
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}