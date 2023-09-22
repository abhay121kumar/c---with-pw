/*
Reverse Word Wise
Send Feedback
Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place 
and so on. Individual words should remain as it is.
Input format :
String in a single line
Output format :
Word wise reversed string in a single line
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome
Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always

*/

#include<iostream>
using namespace std;

int length(char input[])
{
    int count=0;
    for(int i=0;input[i]!='\0';i++)
    {
        count+=1;
    }
    return count;
}

// Method -1 
char * ReverseWord(char input[])
{
    int size = length(input);
    int i=size-1;
    int n=0;
    char *newInput = new char[100];
    while(i>=0)
    {
        int j=i;
        while(input[i]!=' ' && i>=0)
        {
            i--;
        }
        int k = i+1;
        while(k<=j)
        {
            newInput[n] = input[k];
            k++;
            n++;
        }
        if(n<size-1)
        {
            newInput[n] = ' ';
            n++;
        }
        if(input[i]==' ')
        i--;
    }
    return newInput;
}

int main()
{
    char input[100];
    cin.getline(input,100);
    char *small = ReverseWord(input);
    for(int i=0;small[i]!='\0';i++)
    {
        cout<<small[i];
    }
    delete[]small;
    cout<<endl;
    return 0;
}


// abc de f gh
//hg f ed cba
//gh f de abc


// method -2 -correct
/*
void ReverseWord(char input[],int size)
{
    int x = 0;
    int y = size-1;
    while(x<y)
    {
        char temp = input[x];
        input[x] = input[y];
        input[y] = temp;
        x++;
        y--;
    }
    int i=0;
    int j=0;
    while(i < size)
    {
        while(input[i]!=' ' && input[i]!='\0')
        {
            i++;
        }
        int k=i-1;
        while(j<k)
        {
            char temp = input[j];
            input[j] = input[k];
            input[k] = temp;
            j++;
            k--;
        }
        if(input[i]==' ')
        {
            i++;
        }
        j=i;
    }
}

int main()
{
    char input[100];
    cin.getline(input,100);
    int size1 = length(input);

    ReverseWord(input,size1);

    for(int i=0;input[i]!='\0';i++)
    cout<<input[i];

    cout<<endl;
    return 0;
}

*/