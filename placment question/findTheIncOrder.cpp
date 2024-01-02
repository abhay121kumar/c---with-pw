#include<iostream>
using namespace std;

// char* orderInc(char* str1, char* str2){
//     int len1 = sizeof(str1);
//     int curr,prev,dec=0,inc=0,k=0;

//     char help[] = { 'I','n','v','a','l','i','d'};
//     for(int i=1;i<len1;i++){
//         curr = str1[i];
//         prev = str1[i-1];
//         if(prev>curr){
//             dec++;
//         }else{
//             inc++;
//         }
//         if(dec!=len1-1 || inc != len1-1){
//             return help;
//         }else{
//             curr=0,prev=0,dec=0,inc=0;
//             for(int i=1;i<len1;i++){
//                 if(str1[i]!=str2[i]){
//                     k++;
//                     curr = str2[i];
//                     prev = str2[i-1];
//                     if(prev>curr){
//                         dec++;
//                     }else{
//                         inc++;
//                     }
//                 }
//             }
//         }
//         if(dec>0){
//             help[0] = 'i';
//             help[1]='n';
//             help[2]='c';
//             help[3] = 'r';
//             help[4]='a';
//             help[5]='s';
//             char temp = k;
//             help[6] = k;
//             return help;
//         }else{
//             help[0] = 'i';
//             help[1]='n';
//             help[2]='c';
//             help[3] = 'r';
//             help[4]='e';
//             help[5]='a';
//             help[6] = 's';
//             return help;
//         }
//     }
// }

/*
    // char ch1 = 'a';
    // char ch2 = 'A';
    // char ch3 = '1';
    // int a1 = int(ch1);
    // int a2 = int(ch2);
*/


int main(){
    char help[] = {'a','b','c'};
    // for(int i=0;i<3;i++){
    //     cout<<help[i]<<" ";
    // }
   
    //     help[0] = 'd';
    //     help[1]='e';
    //     help[2]='f';
    //     cout<<endl;
    // for(int i=0;i<3;i++){
    //     cout<<help[i]<<" ";
    // }

    int a = 5;
    // char b = (char)a;
    char b = Character.forDigit(a, 10);
    cout<<"hello"<<endl;
    cout<<b<<endl;
    cout<<"hello"<<endl;
    return 0;
}