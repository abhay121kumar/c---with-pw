#include<iostream>
using namespace std;
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<string>

/*
int lengthOfLongestSubstring(string s) {
        int i=0, j=0;
        unordered_map<char, int> mp;
        int count = 0;
        int maxi = INT_MIN;
        while(i<s.length()){
            if(!mp.count(s[i])){
                mp.insert({s[i], i});
                count++;
                maxi = max(count, maxi);
                i++;
            }
            else{
                while(mp.count(s[i])){
                    mp.erase(s[j]);
                    j--;
                    count--;
                }
                mp.insert({s[i], i});
                count++;
                i++;
                maxi = max(count, maxi);
            }
        }
        return maxi;
    }

    int main(){
        string s = "abcabcbb";
        return 0;
    }

    */

   int LongestSubstring(string s){
    if(s.length()==0){
        return 0;
    }
    if(s[s.length()-1]==' '){
        return 1;
    }
    int maxLength=0;
    unordered_map<char,int> ourMap;
    for(int i=0;i<s.length();i++){
        int j=i;
        // cout<<"hello"<<endl;
        int count=0;
        while(j<s.length() && ourMap.count(s[j])==0){
            ourMap[s[j]] = 1;
            count+=1;
            j++;
            // if(s[j]==' '){
            //     count+=1;
            // }
        }
        maxLength = max(count,maxLength);
        ourMap.clear();
    }
    return maxLength;
   }

   int main(){
    string s = "b ";
    // int size;
    // cin>>size;
    // cin.getline(s,size);getline used for char array
    cout<<LongestSubstring(s)<<endl;
    return 0;
   }