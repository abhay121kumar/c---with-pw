#include<iostream>
#include<string>
using namespace std;

int length(char input[])
{
    int count=0;
    for(int i=0;input[i]!='\0';i++)
    {
        count+=1;
    }
    return count;
}

// Method -1
int shift(char input[],int x,int size)
{
    int y = size-1;
    int z = x;
    while(z != y)
    {
        input[y+1] = input[y];
        y--;
    }
    input[y+1] = ' ';
    input[size+1] = '\0';

    return size+1;
}
void spaceBEletter(char input[])
{
    int x1=0;
    int size1 = length(input);
    while(x1 <= size1-1)
    {
        if(input[x1]!=' ')
        {
            int smallSize = shift(input,x1,size1);
            size1 = smallSize;
        }
        x1++;
    }
}
int main()
{
    char input[100];
    cin.getline(input,100);
    spaceBEletter(input);
    for(int i=0;input[i]!='\0';i++)
    {
        cout<<input[i];
    }
    cout<<endl;
    return 0;
}


//ab h a y



// int main()
// { 

    //method-2
    
    // int n;
    // cin>>n;
    // char input[n];
    // // cin.getline(input,100);
    // for(int i=0;i<n;i++)
    // {
    //     cin>>input[i];
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<input[i]<<" ";
    // }
    // cout<<endl;
     



    // Method -1    
    // string s;
    // cin>>s;
    // for(int i=0;s[i]!='\0';i++)
    // {
    //     cout<<s[i]<<" ";
    // }
    // return 0;
// }



// int main()
// {
//     char input[100];
//     cin.getline(input,100);
//     input[1] = ' ';
//     for(int i=0;input[i]!='\0';i++)
//     cout<<input[i];
//     cout<<endl;
//     return 0;
// }