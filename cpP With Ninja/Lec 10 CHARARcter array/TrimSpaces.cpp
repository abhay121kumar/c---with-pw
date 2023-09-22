#include<iostream>
using namespace std;

int length(char input[])
{
    int count =0;
    for(int i=0;input[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
// Method -1
/*
void shift(char input[],int x)
{
    while(input[x]!='\0')
    {
        input[x] = input[x+1];
        x++;
    }
    return; 
}
void TrimSpace(char input[])
{
    int x=0;
    while(input[x]!='\0')
    {
        if(input[x]==' ')
        {
            shift(input,x);
        }
        x++;
    }
}
int main()
{
    char input[100];
    cin.getline(input,100);
    TrimSpace(input);
    cout<<input<<endl;
    return 0;

}

*/

// int TrimSpace(char input[],char newinput[])
// {
//     int x=0,y=0;
//     // char newinput[100];
//     while(input[x]!='\0')
//     {
//         while(input[x]!=' '&& input[x]!='\0')
//         {
//             newinput[y] = input[x];
//             x++;
//             y++;
//         }
//         x++;
//     }
//     int small = y;
//     return small;
// }
// int main()
// {
//     char input[100];
//     char newinput[100];
//     cin.getline(input,100);
//     int smallLength = TrimSpace(input,newinput);
//     for(int i=0;i<smallLength;i++)
//     {
//         cout<<newinput[i];
//     }
//     // cout<<input<<endl;
//     cout<<endl;
//     return 0;

// }

// Method -2

char * TrimSpace(char input[])
{
    int x=0,y=0;
    char *newinput  = new char[100];
    while(input[x]!='\0')
    {
        if(input[x]==' ')
        {
            x++;
        }
        else
        {
            newinput[y] = input[x];
            x++;
            y++;
        }
    }
    newinput[y] = '\0';
    return newinput;
}



int main(){

    char input[100];
    // char newinput[100];
    cin.getline(input,100);
    char * smallInput = TrimSpace(input);
    cout<<smallInput<<endl;
    delete []smallInput;
    return 0;

}