#include<iostream>
using namespace std;



// i am just here checking to reverse the array 
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n] ;
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     for(int j=n-1;j>=0;j--)
//     {
//         cout<<a[j]<<" ";
//     }
// }

int upd(int output[],int n)
{
    if(n==0)
    {
        output[0]++;
        // cout<<"Update array"<<" "<<output[0];
        return 0;
    }
    int small = upd(output,n-1);
    (output[n])++;
    // cout<<"Update array after base condition"<<" "<<output[n];
    // cout<<"small at update function"<<" ";
    return small+1;
}

int allIndex(int input[],int size,int x,int output[])
{
    if(size==0)
    {
        return 0;
    }
    int small = allIndex(input+1,size-1,x,output);
    small = upd(output,small);
    // cout<<"small at allIndex function"<<" ";

    if(input[0]==x)
    {
        output[small]=0;
        // cout<<"output array at allindex in the if condition loop"<<" "<<output[small];
        // cout<<"small value in the if condition at allIndex"<<" "<<small;
        return small+1;
    }
    else
    return small;
}

// void reverse(int output[],int n)
// {
//     int i=0,j=n-1;
//     while(i<j)
//     {
//         int temp = output[i];
//         output[i] = output[j];
//         output[j] = temp;
//         // cout<<"in the reverse function temp"<<" "<<temp;
//         // cout<<"in the reverse function output[i]"<<" "<<output[i];
//         // cout<<"in the reverse function output[j]"<<" "<<output[j];
//         i++;
//         j--;
//     }
// }


int main()
{
    int size, x;
    cout << "Enter size of the array " << endl;
    cin >> size;

    int input[size];
    int output[50];
    cout << "Enter the element of the array" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }

    cout << "Enter element that you want to search" << endl;
    cin >> x;

    int size2 = allIndex(input, size, x, output);
    for (int i = size2-1; i >=0; i--)
    {
        cout << output[i] << " ";
    }

    return 0;
}













// ***********************************************************************************************************************************//


// #include<iostream>
// using namespace std;


// int upd(int output[],int n)
// {
//     if(n==0)
//     {
//         output[0]++;
//         cout<<"Update array"<<" "<<output[0];
//         return 0;
//     }
//     int small = upd(output,n-1);
//     (output[n])++;
//     cout<<"Update array after base condition"<<" "<<output[0];
//     cout<<"small at update function"<<" ";
//     return small+1;
// }

// int allIndex(int input[],int size,int x,int output[])
// {
//     if(size==0)
//     {
//         return 0;
//     }
//     int small = allIndex(input+1,size-1,x,output);
//     small = upd(output,small);
//     cout<<"small at allIndex function"<<" ";

//     if(input[0]==x)
//     {
//         output[small]=0;
//         cout<<"output array at allindex in the if condition loop"<<" "<<output[small];
//         cout<<"small value in the if condition at allIndex"<<" "<<small;
//         return small+1;
//     }
//     else
//     return small;
// }

// void reverse(int output[],int n)
// {
//     int i=0,j=n-1;
//     while(i<j)
//     {
//         int temp = output[i];
//         output[i] = output[i];
//         output[j] = temp;
//         cout<<"in the reverse function temp"<<" "<<temp;
//         cout<<"in the reverse function output[i]"<<" "<<output[i];
//         cout<<"in the reverse function output[j]"<<" "<<output[j];
//         i++;
//         j--;
//     }
// }


// int main()
// {
//     int size, x;
//     cout << "Enter size of the array " << endl;
//     cin >> size;

//     int input[size];
//     int output[50];
//     cout << "Enter the element of the array" << endl;

//     for (int i = 0; i < size; i++)
//     {
//         cin >> input[i];
//     }

//     cout << "Enter element that you want to search" << endl;
//     cin >> x;

//     int size2 = allIndex(input, size, x, output);
//     for (int i = size2-1; i >=0; i--)
//     {
//         cout << output[i] << " ";
//     }

//     return 0;
// }











































