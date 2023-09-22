#include<iostream>
using namespace std;
int main()
{
    char input[100];

    // cin>>input; // Hello World
    // cout<<input<<endl; // Hello
    //cin.getline(string_name,length)
    // cin.getline(input,100); // hello world
    // cout<<input<<endl; // hello world

    //cin.getline(string_name,length,delimiter);
    cin.getline(input,100,'o');
    cout<<input<<endl;
    return 0;
}