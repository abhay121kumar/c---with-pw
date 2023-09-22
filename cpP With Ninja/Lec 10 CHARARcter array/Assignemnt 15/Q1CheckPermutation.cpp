/*
Check Permutation
Send Feedback
For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.
Permutations of each other
Two strings are said to be a permutation of each other when either of the string's characters can be rearranged so that 
it becomes identical to the other one.

Example: 
str1= "sinrtg" 
str2 = "string"

The character of the first string(str1) can be rearranged to form str2 and hence we can say that the given strings are a 
permutation of each other.
Input Format:
The first line of input contains a string without any leading and trailing spaces, representing the first string 'str1'.

The second line of input contains a string without any leading and trailing spaces, representing the second string 'str2'.
Note:
All the characters in the input strings would be in lower case.
Output Format:
The only line of output prints either 'true' or 'false', denoting whether the two strings are a permutation of each other or not.

You are not required to print anything. It has already been taken care of. Just implement the function. 
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second
Sample Input 1:
abcde
baedc
Sample Output 1:
true
Sample Input 2:
abc
cbd
Sample Output 2:
false

*/
#include<iostream>
#include<cstring>
#include<string>
using namespace std;



bool CheckPermuation(string str1,string str2)
{
    int str1Len = str1.length();
    int str2Len = str2.length();
    int ans=0;
    if(str1Len == str2Len)
    {
        int arr[256] = {};
        for(int i=0;i<str1Len;i++)
        {
            char c1 = str1[i];
            int a1 = int(c1);
            int j=a1;
            arr[j] = arr[j] + 1;
        }
        for(int i=0;i<str2Len;i++)
        {
            char c1 = str2[i];
            int a1 = int(c1);
            int j=a1;
            arr[j] = arr[j] - 1;
        }
        int i = 0;
        while(i<256)
        {
            if(arr[i]!=0)
            {
                ans = 0;
                break;
            }
            else
            {
                ans = 1;
            }
            i++;
        }
    }
    else
    {
        ans = 0;
    }
    return ans;
}

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int small = CheckPermuation(str1,str2);
    cout<<small<<endl;
    return 0;
}


// bool CheckPermuation(string str1,string str2,int str1Len,int str2Len,int arr[],int i)
// {
    
//     if(str1Len == str2Len)
//     {
//         return false;
//     }
//     char c1 = str1[i];
//     int a1 = int(c1);
//     int j=a1;
//     arr[j] = arr[j] + 1;

//     char c1 = str2[i];
//     int a1 = int(c1);
//     int j=a1;
//     arr[j] = arr[j] - 1;
//     CheckPermuation(str1,str2,str1Len,str2Len,arr,i++);

// }
// int main()
// {
//     string str1,str2;
//     cin>>str1>>str2;
//     int arr[256]={};
//     int n = str1.length();
//     int m = str2.length();
//     int small = CheckPermuation(str1,str2,n,m,arr,0);
//     cout<<small<<endl;
//     return 0;
// }