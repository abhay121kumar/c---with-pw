#include<iostream>
using namespace std;
// print all ascii character
int main ()
{
    // char c;
    // cin>>c;
    // cout<<(int)c<<endl;
    for(int i=97;i<=122;i++)
    {
        cout<<"integer value of "<<i<<" "<<"is "<<(char)i<<endl;
    }
    cout<<endl;
    // int i='1';
    // cout<<(int)i<<endl;
    
    return 0;
}

























/*

/ int a='1';
    int n;
    cin>>n;
    char c[n];
    cout << "Enter a character : ";
    for(int i=0;i<26;i++)
    {
        cin>>c;
    }
    for(int j=0;j<26;j++)
    {
        cout << "ASCII value of " << c <<" is :  " << (int)c<<endl;
    }
    // cout << "ASCII value of " << c <<" is :  " << (int)c<<endl;
    // cout << "ASCII value of " << a <<" is :  " << (char)a<<endl;
*/