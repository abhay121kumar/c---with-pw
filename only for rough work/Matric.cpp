#include<iostream>
using namespace std;

// 2-D ARRay
// int main()
// {
//     int x[3][4] = {{1,2,3,5},{4,5,6,1},{7,8,9,6}};
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             cout<<x[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     // cout<<endl;
//     // for(int i=0;i<3;i++)
//     // {
//     //     for(int j=0;j<4;j++)
//     //     {
//     //         cout<<x[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }
//     return 0;
// }




// #include<iostream>
// using namespace std;

// void processArr(int arr[][2])
// {
//     arr[0][0] = 0;
//     arr[0][1] = 1;
//     arr[1][0] = 2;
//     arr[1][1] = 3;
//     cout << "element at index 1,1 is " << arr[1][1];
//     cout<<endl;
// }
// int main() {
//    int arr[2][2];
// //    arr[0][0] = 0;
// //    arr[0][1] = 1;
// //    arr[1][0] = 2;
// //    arr[1][1] = 3;

//    processArr(arr);
//    return 0;
// }



int main()
{
    int a[3][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12}
                    };
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}



























// 3-D array

// int main()
// {
//     // int a[2][3][4] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23};
//     int a[2][3][4] = {{{0,1,2,3},{4,5,6,7},{8,9,10,11}},{{12,13,14,15},{16,17,18,19},{20,21,22,23}}};
//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             for(int k=0;k<4;k++)
//             {
//                 cout<<a[i][j][k]<<" ";
//             }
//             cout<<endl;
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }


















