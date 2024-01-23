#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// void print_binary(int n){
//      for (int i = n-1; i >= 0; i--) { 
//         int k = n >> i; 
//         if (k & 1) 
//             cout << "1"; 
//         else
//             cout << "0"; 
//     } 
// }

string DecimalToBinary(int num) 
{ 
    string str; 
      while(num){ 
      if(num & 1) // 1 
        str+='1'; 
      else // 0 
        str+='0'; 
      num>>=1; // Right Shift by 1   
    }     
      return str; 
} 
  
void reverse(string str) 
{ 
  for(int i=str.size()-1 ; i>=0 ; i--) 
   cout<< str[i];  
} 

int main(){
    int n;
    cin>>n;
    // print_binary(n);
    // string str = "4";
    // reverse(str);
    reverse(DecimalToBinary(n));
    cout<<endl;
    return 0;
}