#include<iostream>
#include<algorithm>
using namespace std;
#include<string>




int unaffectedchar(string dataStream){
    int size = dataStream.length();
    // cout<<size<<endl;
    int answer = 0;
    string newS = "";
    for(int i=size-1;i>=0;i--){
        newS+=dataStream[i];
    }
    int i=0,j=0;
    while(i<size){
        if(dataStream[i]==newS[i]){
            answer+=1;
        }
        i++;
    }
    return answer;
}

int main(){
    string s;
    cin>>s;
    cout<<unaffectedchar(s);
    return 0;
}