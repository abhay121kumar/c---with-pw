/*
Remove Consecutive Duplicates
Send Feedback
For a given string(str), remove all the consecutive duplicate characters.
Example:
Input String: "aaaa"
Expected Output: "a"

Input String: "aabbbcc"
Expected Output: "abc"
 Input Format:
The first and only line of input contains a string without any leading and trailing spaces. All the characters in the string 
would be in lower case.
Output Format:
The only line of output prints the updated string.
Note:
You are not required to print anything. It has already been taken care of.
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second
Sample Input 1:
aabccbaa
Sample Output 1:
abcba
Sample Input 2:
xxyyzxx
Sample Output 2:
xyzx

*/

#include<iostream>
using namespace std;

/*
int RemoveCharacter(char input[],int n)
{
    int i=0;
    while(i<n)
    {
        int j=i+1;
        if(input[i]==input[j] && j<n)
        {
            while(input[i]==input[j] && j<n)
            {
                j++;
            }
            int k=j-1;
            while(k>0)
            {
                j = k + 1;
                while(j<n)
                {
                    input[j-1] = input[j];
                    j++;
                }
                n = n-1;
                k--;
                // cout<<n<<endl;
            }
        }
        i++;
    }
    return n;
}
int main()
{
    int n;
    cin>>n;
    char input[n];
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    int smallSize = RemoveCharacter(input,n);
    // cout<<smallSize;
    for(int i=0;i<smallSize;i++)
    {
        cout<<input[i];
    }
    cout<<endl;
    return 0;
}

*/

void RemoveDuplicate(char s[])
{
    int i=1,j=1;
    char lastChar = s[0];
    while(s[i]!='\0')
    {
        if(s[i]==lastChar)
        {
            i++;
        }
        else
        {
            lastChar = s[i];
            s[j] = s[i];
            j++;
            i++;  
        }
    }
    s[j]='\0';
}

int main()
{
    char s[100];
    cin>>s;
    RemoveDuplicate(s);
    cout<<s<<endl;

    return 0;
}