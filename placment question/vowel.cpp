#include<iostream>
using namespace std;
#include<string>

string removeVowel(string engStr){
    string answer = "";
    for(int i=0;i<engStr.length();i++){
        if(engStr[i]!='a' && engStr[i]!='e' && engStr[i]!='i' && engStr[i]!= 'o'&& engStr[i]!= 'u' && engStr[i]!='A' && engStr[i]!='E' && engStr[i]!='I' && engStr[i]!= 'O' && engStr[i]!= 'U'){
            answer+=engStr[i];
        }
    }
    return answer;
}

int main(){
    string engStr;
    getline(cin,engStr);

    string result = removeVowel(engStr);
    cout<<result<<endl;
    return 0;
}
