#include<iostream>
using namespace std;
#include<bits/stdc++.h>

string DecimalToBinary(int n){
    int num = n;
    string str = "";
    while(num){
        if(num&1){
            str+='1';
        }else{
            str+='0';
            num>>=1;
        }
    }
    cout<<"juncwdve"<<endl;
    int i=0,j=str.length()-1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    return str;
}

int count_set_bit(int n){
    int count=0;
    cout<<"okay"<<endl;
    string binary = DecimalToBinary(n);
    cout<<"hello"<<endl;
    for(int i=0;i<binary.size();i++){
        if(binary[i]=='1'){
            count+=1;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<count_set_bit(n)<<endl;
    return 0;
}