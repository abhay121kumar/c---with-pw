#include<iostream>
using namespace std;
int main()
{
    // string s ="";
    // s+='a'; 
    // s+="bcde"; 
    // cout<<s<<endl;


    int n;
    cin>>n;
    char input[n];
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<input[i];
    }
    // char input[100];
    // cin.getline(input,100);
    return 0;
}