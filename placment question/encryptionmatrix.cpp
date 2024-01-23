#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main(){
    string s;
    cin>>s;
    cout<<s<<endl;
    int size = s.length();
    int num=1;
    int temp=1;
    int low=0,high=0;
    int n=0,m=0;
    while(num<=size){
        num = pow(temp,2);
        high = temp;
        temp++;
    }
    low = high-1;
    cout<<low<<" low "<<high<<" high "<<endl;
    // int x = abs(size-pow(low,2));
    // int y = abs(size-pow(high,2));
    n = low;
    m= high;
    // cout<<x<<" x "<<y<<" y "<<endl;
    cout<<low*high<<" multi "<<size<<" size "<<endl;
    if(low*high<size){
        if(low<high){
            n = high;
            m = high;
        }else{
            n = low;
            m = low;
        }
        cout<<"hello"<<endl;
    }
    cout<<n<<" n "<<m<<" m "<<endl;
    int k=0;
    string str[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            str[i][j] = s[k];
            k++;
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<str[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<str[j][i];
        }
        cout<<" ";
    }
    return 0;
}