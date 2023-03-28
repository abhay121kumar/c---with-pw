#include<iostream>
#include<string>
using namespace std;
int main()
{
    // int n;
    string arr;
    cin>>arr;
    cout<<arr;
    int i=0;
    string str;
    int j=str.length()-1;
    while(i<=j)
    {
        char ch=arr[j];
        arr[j] = arr[i];
        arr[i] = ch;
        i++;
        j--;
    }
}