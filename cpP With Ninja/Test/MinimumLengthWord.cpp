/*
Minimum Length Word
Send Feedback
Given a string S (that can contain multiple words), you need to find the word which has minimum length.
Note : If multiple words are of same length, then answer will be first minimum length word in the string.
Words are seperated by single space only.
Input Format :
String S
Output Format :
Minimum length word
Constraints :
1 <= Length of String S <= 10^5
Sample Input 1 :
this is test string
Sample Output 1 :
is
Sample Input 2 :
abc de ghihjk a uvw h j
Sample Output 2 :
a

*/

#include<iostream>
#include<cstring>
using namespace std;



string MinLengthString(string str,int size)
{
    int i=0;
    string str1 = "";
    while(str[i]!=' ' && str[i]!='\0')
    {
        str1+=str[i];
        i++;
    }
    int len1 = str1.length();
    i++;
    // cout<<i<<endl;
    while(i<size)
    {
        string str2 = "";
        while(str[i]!=' ' && str[i]!='\0')
        {
            str2+=str[i];
            i++;
        }
        i++;
        int len2 = str2.length();
        if(len1>len2)
        {
            len1=len2;
            str1=str2;
        }
    }
    return str1;
}
int main()
{
    string s;
    getline(cin,s);
    int size = s.length();
    cout<<MinLengthString(s,size)<<endl;
    return 0;
}