#include<iostream>
using namespace std;
#include<vector>
#include<set>

set<string> solve(string name,int size){
    set<string> obj;
    for(int i=0;i<size;i++){
        for(int j=size-1;j>=i;j--){
            string str = name.substr(i,j+1);
            obj.insert(str);
        }
    }
    return obj;
}

int main(){
    string name;
    cin>>name;
    int size = name.length();
    cout<<size<<endl;
    set<string> output = solve(name,size);
    for(auto i:output){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}