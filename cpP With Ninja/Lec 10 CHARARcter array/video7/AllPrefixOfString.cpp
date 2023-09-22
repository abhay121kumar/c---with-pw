#include<iostream>
#include<cstring>
using namespace std;


// mam method
void allPrefix(char input[])
{
    for(int i=0;input[i]!='\0';i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<input[j];
        }
        cout<<endl;
    }
}
int main()
{
    char input[100];
    cin>>input;
    allPrefix(input);
    return 0;
}

// my method
// int main()
// {
//     char input[100];
//     cin>>input;
//     int len = strlen(input);
//     for(int i=0;i<len;i++)
//     {
//         int j=0;
//         while(j<=i)
//         {
//             cout<<input[j];
//             j++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }