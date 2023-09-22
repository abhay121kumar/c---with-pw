#include<iostream>
using namespace std;
#include<string>
#include<bits/stdc++.h>
int sumString(string str){
    int size = str.size();
    if(size==0){
        return 0;
    }
    int i=0;
    int j=size-1;
    int k=0;
    int ans=0;
    int a[100];
    if(size%2==0){
        while(i<j){
            string newStr="";
            newStr+=str[i];
            newStr+=str[j];
            int element  = stoi(newStr);
            a[k] = element;
            i++;
            j--;
            k++;
        }
        for(int k1=0;k1<k;k1++){
            ans+=a[k1];
        }
    }
    else{
        while(i<j){
            string newStr="";
            newStr+=str[i];
            newStr+=str[j];
            int element  = stoi(newStr);
            a[k] = element;
            i++;
            j--;
            k++;
    // cout<<"hello"<<endl;
        }
        string newStr="";
        newStr+=str[i];
        int element  = stoi(newStr);
        a[k] = element;
        k++;
        for(int k1=0;k1<k;k1++){
            ans+=a[k1];
        }
    }
    return ans;
}

int main(){
    string str;
    cin>>str;
    cout<<sumString(str)<<endl;
    return 0;
}