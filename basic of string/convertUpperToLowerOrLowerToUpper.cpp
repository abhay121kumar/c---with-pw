#include<iostream>
using namespace std;
#include<string>

int main(){
    string str = "aBhAY";
    string newStr = "";
    int a,b;
    char c;
    for(int i=0;i<str.length();i++){
        a = str[i];
        if(a<97){
            b = a+32;
        }else{
            b = a-32;
        }
        c = b;
        newStr+=c;
    }
    cout<<str<<endl;
    cout<<newStr<<endl;
    return 0;
}