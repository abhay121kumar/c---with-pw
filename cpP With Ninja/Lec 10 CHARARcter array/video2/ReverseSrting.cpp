#include<iostream>
using namespace std;

int length(char input[])
{
    int count =0;
    for(int i=0;input[i]!='\0';i++)
    {
        count++;
    }
    // cout<<count<<endl;
    return count;
}

// void ReverseString(char input[])
// {
//     int len = length(input);
//     int x=0,y=len-1;
//     // cout<<"kuch ev"<<endl;
//     while(x<y)
//     {
//         char temp = input[x];
//         input[x] = input[y];
//         input[y] = temp;
//         x++;
//         y--;
//     }
//     cout<<input<<endl;
// }

// int main()
// {
//     char input[100];
//     cin.getline(input,100);
//     ReverseString(input);
//     cout<<input<<endl;
//     return 0;
// }



//  metohd-2

void ReverseString(char input[],int x,int y)
{
    if(x>=y)
    {
        return;
    }
    char temp = input[x];
    input[x] = input[y];
    input[y] = temp;
    x++;
    y--;
    ReverseString(input,x,y);
}

int main()
{
    char input[100];
    cin.getline(input,100);
    int size= length(input);
    int start=0;
    ReverseString(input,start,size-1);
    cout<<input<<endl;
    return 0;
}