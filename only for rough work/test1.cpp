#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> output;

int allIndexes(int input[], int size, int x) 
{
  
    if(size == -1)
    {
        return 0;
    }
   
    int small = allIndexes(input,size-1,x);
    if(input[size] == x){
        output.push_back(size);
    }
    return output;
}

int main()
{
    int size,x;
    cout<<"Enter size of the array "<<endl;
    cin>>size;
    int input[size];
    cout<<"Enter the element of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>input[i];
    }
    cout<<"Enter element that you want to search"<<endl;
    cin>>x;
    cout<<allIndexes(input,size-1, x)<<endl;

    return 0;
}