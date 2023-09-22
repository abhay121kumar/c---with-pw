#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

/*
There are n cities connected by some number of flights. You are given an array flights where
flights[i] = [fromi, toi, pricei] indicates that there is a flight from city fromi to city toi with cost
pricei.
You are also given three integers src, dst, and k, return the cheapest price from src to dst with at
most k stops. If there is no such route, return -1. 
*/
class Solution 
{ 
    public:
    vector<pair<int,int>> ad[105];
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k)
    {
        for(int i=0;i<flights.size();i++)
        {
            ad[flights[i][0]].push_back({flights[i][1],flights[i][2]});
        }
        vector<int> dis(n,INT_MAX);
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{src,0}}); dis[src]=0;
        while(!q.empty())
        {
            auto p= q.front();
            q.pop(); int stop=p.first;
            int u=p.second.first; int
            val=p.second.second;
            if(stop==k+1&&u==dst)
            break;
            if(stop>k+1)
            continue;
            for(auto i:ad[u])
            { 
                int
                v=i.first; int
                d=i.second;
                if(d+val<dis[v] && stop<k+1)
                {
                dis[v]=d+val;
                q.push({stop+1,{v,dis[v]}});
                }
            }
        }
        if(dis[dst]==INT_MAX)
        return -1; 
        return dis[dst];
    }
}; 
// cheapset flight with k stops 