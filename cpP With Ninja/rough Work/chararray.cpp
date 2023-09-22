#include<iostream>
using namespace std;

int main()
{
    // char a[10];
    // cin>>a;
    // cout<<a<<endl;
    // return 0;

    // string s;
    // cin>>s;
    // // s[0] = '\0';
    // s[1] = '\0';
    // cout<<s<<endl;

    // int var = 97;
    // char c1 = char(97);
    // cout<<c1<<endl;

    // int a=3;
    // char b1 = char(a);
    // cout<<b1<<endl;
    // char b = int(a);
    // cout<<b<<endl;
    
    // string s;
    // cin>>s;
    // int count =3;
    // char k = 48 + count;
    // s[1] = k;
    // cout<<s<<endl;


    // int arr[4] = {1,2,3,4};
    // arr[2] = '\0';
    // for(int i=0;i<4;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    int arr[4] = {1,2,3,4};
    int count=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    cout<<count<<endl;

}