#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4};
    int *p = (arr + 1);
    cout<< *arr + 9<<endl;
    // cout<<arr[0]<<endl;
    // cout<<*arr<<endl;
    return 0;
}