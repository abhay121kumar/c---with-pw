#include<iostream>
using namespace std;
#include<string>

int main(){
    string str = "abhay";
    string newStr="";
    for(int i=0;i<str.length();i++){
        char a = str[i];
        int a1 = a-32;
        char b = a1;
        newStr+=b;
    }
    // char a = 'b';
    // int b = a-32;
    // cout<<b<<endl;
    // cout<<'b'<<endl;
    cout<<str<<endl;
    cout<<newStr<<endl;
    return 0;
}
// abhay
// ABHAY