
#include<iostream>
using namespace std;

int allIndexes(int input[], int size, int x, int output[]) 
{
  
    if(size == 0)
    {
        return 0;
    }
    int ans = allIndexes(input,size-1,x,output);
    if(input[size-1] == x)
    {
        output[ans] = size-1;
        return ans+1;
    }
    else{
        return ans;
    }
}

int main()
{
    int size,x;
    cout<<"Enter size of the array "<<endl;
    cin>>size;
    int input[size];
    int output[size];
    cout<<"Enter the element of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>input[i];
    }
    cout<<"Enter element that you want to search"<<endl;
    cin>>x;
    
    int size2 = allIndexes(input,size,x,output);

    // int size2= sizeof(output)/sizeof(int);
    cout<<size2<<endl;
    for(int i=0;i<size2; i++)
    {
        cout<<output[i]<<" ";
    }

    return 0;
}