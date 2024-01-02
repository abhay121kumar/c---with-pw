#include<iostream>
#include<string>
using namespace std;
#include<bits/stdc++.h>
// int main()
// {
//     // char ch1 = 'a';
//     // char ch2 = 'A';
//     // char ch3 = '1';
//     // int a1 = int(ch1);
//     // int a2 = int(ch2);
//     // int a3 = int(ch3)-48;
//     // char x = '1' + 0;
//     // // char y = char(x);
//     // cout<<"char wala"<<x<<endl;
//     // cout<<a1<<endl;
//     // cout<<a2<<endl;
//     // cout<<a3<<endl;    // cout<<str1<<endl;
//     // cout<<temp<<endl;


//     int n,m;
//     cin>>n>>m;
//     char str1[n],str2[m];
//     cin>>str1>>str2;
//     // cout<<str1<<endl;
//     // cout<<str2<<endl;
//     int x = str1[0]-48;
//     int y = str2[0]-48;
//     int temp = (x+y)%10;
//     char str[100];
//     //  str = to_string(temp);
//     cout<<str<<" string"<<endl;
//     str1[n-1] = str[0];
//     cout<<str1<<endl;
//     return 0;

//     // int arr[256] = {};
//     // for(int i=0;i<256;i++)
//     // {
//     //     cout<<arr[i]<<" ";
//     // }
//     // cout<<endl;
//     // char c1 = 'a';
//     // int a1 = int(c1);
//     // cout<<a1<<endl;


//     // string str1,str2;
//     // cin>>str1>>str2;
//     // int str1Len = str1.length();
//     // int str2Len = str2.length();
//     // if(str1Len == str2Len)
//     // {
//     //         return 0;
//     // }
//     // cout<<"hello"<<endl;
//     // string str1,str2;
//     // cin>>str1>>str2;
//     // int n = str1.length();
//     // int m = str2.length();
//     // if(n==m)
//     // {
//     //     cout<<"abhay"<<endl;
//     //     // return 1;
//     //     // break;
//     //     exit;
//     //     cout<<"arun"<<endl;
//     // }
//     // if else(n==2)
//     // {
//     //     cout<<"abhay"<<endl;
//     //     return 0;
//     //     cout<<"kumar"<<endl;
//     // }
//     // cout<<"hello"<<endl;

//     return 0;
// }

int main(){
    string s = "223";
    cout<<s[0]<<endl;
    cout<<s[1]<<endl;
    cout<<s[2]<<endl;
    int a = s[0];
    int b = s[1];
    int c = s[2];
    cout<<a-48<<endl;
    cout<<b-48<<endl;
    cout<<c-48<<endl;

    string s1 = "";
    s1+=s[0];
    s1+=s[2];
    cout<<s1<<endl;
    int value = stoi(s1);
    cout<<value<<endl;
    cout<<typeid(value).name()<<endl;

    // map<int,bool> mpp;
    // for(int i=1;i<=26;i++){
    //     mpp[i]=true;
    // }
    // if(mpp[0]==true){
    //     cout<<"true"<<endl;
    // }
    // if(mpp[24]==true){
    //     cout<<"djdkd"<<endl;
    // }
    return 0;
}