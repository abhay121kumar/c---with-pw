#include<iostream>
#include<cstring>
using namespace std;

// void print2Darray(int input[][100],int n,int m)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             cout<<input[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     int input[100][100];
//     int n,m;
//     cin>>n>>m;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             cin>>input[i][j];
//         }
//     }
//     print2Darray(input,n,m);
//     return 0;
// }


void print2Darray(int input[][100],int n,int m)
{
    // int j=0;
    // int i=0;
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            cout<<input[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int input[100][100];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>input[i][j];
        }
    }
    print2Darray(input,n,m);
    return 0;
}










// void print2Darray(int input[][2],int n,int m)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             cout<<input[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     int input[][2] = {{1,2},{3,4}};
//     print2Darray(input,2,2);
//     return 0;
// }
// 1 2 
// 3 4





// void print2Darray(int input[][5],int n,int m)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             cout<<input[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     int input[][5] = {{1,2},{3,4}};
//     print2Darray(input,2,5);
//     return 0;
// }
// 1 2 0 0 0 
// 3 4 0 0 0 





// void print2Darray(int input[][5],int n,int m)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             cout<<input[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     int input[5][5] = {{1,2},{3,4}};
//     print2Darray(input,5,5);
//     return 0;
// }
// 1 2 0 0 0 
// 3 4 0 0 0 
// 0 0 0 0 0 
// 0 0 0 0 0 
// 0 0 0 0 0 