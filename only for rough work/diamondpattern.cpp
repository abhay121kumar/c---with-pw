/*
       *
      ***
     *****
      ***
       *
*/
#include<iostream>
using namespace std;

int main()
{
    int a=4;
    for(int i=1;i<=a;i++)
    {
        int b=a-i;
        while(b>0)
        {
            cout<<" ";
            b--;
        }
        b=2*i-1;
        while(b>0)
        {
            cout<<"*";
            b--;
        }
        cout<<endl;
    }

    for(int i=4;i>0;i--)
    {
        int b=a-i;
        while(b>0)
        {
            cout<<" ";
            b--;
        }
        b=2*i-1;
        while(b>0)
        {
            cout<<"*";
            b--;
        }
        cout<<endl;
    }
    return 0;
}
