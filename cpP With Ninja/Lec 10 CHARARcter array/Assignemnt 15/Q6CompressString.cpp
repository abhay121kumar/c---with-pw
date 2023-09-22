/*
Compress the String
Send Feedback
Write a program to do basic string compression. For a character which is consecutively repeated more than once, replace consecutive 
duplicate occurrences with the count of repetitions.
Exmple:
If a string has 'x' repeated 5 times, replace this "xxxxx" with "x5".

The string is compressed only when the repeated character count is more than 1.
Note :
Consecutive count of every character in the input string is less than or equal to 9.
Input Format:
The first and only line of input contains a string without any leading and trailing spaces.
Output Format:
The only line of output prints the updated string.
Note:
You are not required to print anything. It has already been taken care of.
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second
Sample Input 1:
aaabbccdsa
Sample Output 1:
a3b2c2dsa
Sample Input 2:
aaabbcddeeeee
Sample Output 2:
a3b2cd2e5

*/

#include<iostream>
#include<cstring>
using namespace std;

string CompressString(string str,int size)
{
    string strNew = "";
    for(int i=0;i<size;i++)
    {
        int count=0;
        char c = str[i];
        while(str[i]== c && i<size)
        {
            count++;
            i++;
        }
        i--;
        strNew = strNew + c;
        if(count>1)
        {
            char k = 48 + count;
            strNew = strNew + k;
        }
    }
    return strNew;
}

int main()
{
    string str;
    cin>>str;
    int size = str.length();
    cout<<CompressString(str,size)<<endl;
    return 0;
}













// void CompressString(char input[],int size)
// {
//     int j=0;
//     char inputNew[size];
//     for(int i=0;input[i]!='\0';i++)
//     {
//         int b=0;
//         char c = input[i];
//         while(input[i]== c && input[i]!='\0')
//         {
//             b++;
//             i++;
//         }
//         inputNew[j] = c;
//         j++;
//         if(b>1)
//         {
//             char a = 48 + b;
//             inputNew[j] = a; // problem
//             j++;
//         }
//     }
//     inputNew[j] = '\0';
//     int i;
//     for(i=0;inputNew[i]!='\0';i++)
//     {
//         input[i] = inputNew[i];
//     }
//     input[i] = '\0';
//     // cout<<strNew<<endl;
//     // return strNew;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     char input[n];
//     cin>>input;
//     // char c = '1';
//     // input[1] = c;
//     CompressString(input,n);
//     cout<<input<<endl;
//     return 0;
// }