/*
Reverse Each Word
Send Feedback
Aadil has been provided with a sentence in the form of a string as a function parameter. The task is to implement a function so as to 
print the sentence such that each word in the sentence is reversed.
Example:
Input Sentence: "Hello, I am Aadil!"
The expected output will print, ",olleH I ma !lidaA".
Input Format:
The first and only line of input contains a string without any leading and trailing spaces. The input string represents the sentence 
given to Aadil.
Output Format:
The only line of output prints the sentence(string) such that each word in the sentence is reversed. 
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
emocleW ot gnidoC sajniN
Sample Input 2:
Always indent your code
Sample Output 2:
syawlA tnedni ruoy edoc

*/

#include <iostream>
using namespace std;
#include<cstring>

/*
int length(char input[])
{
    int count =0;
    for(int i=0;input[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
void ReverseString(char input[])
{
    int len = length(input);
    int x=0,y=0;
    while(x<len)
    {
        while(input[y]!=' ' && y<len)
        {
            y++;
        }
        int z = y;
        y--;
        while(x<y)
        {
            char temp = input[x];
            input[x] = input[y];
            input[y] = temp;
            x++;
            y--;
        }
        input[z] = ' ';
        y = z+1;
        x=y;
    }  
}

int main()
{
    char input[100];
    cin.getline(input,100);
    ReverseString(input);
    cout<<input<<endl;
    return 0;
}

*/



// void reverseEachWord(char input[]){
//     int prev=-1;
//     for(int i=0;i<=strlen(input);i++)

//     {
//         if(input[i]==' '||input[i]=='\0')
//         {
//             std::ReverseString(input+prev+1,input+i);
//                 prev=i;
//         }
//     }
// }




// #include<iostream>
// #include<string>
// using namespace std;


int count(string str,int & i){
    int len = str.length();
    int count =0;
    while(str[i]!=' ' && i<len){
        i++;
        count++;
    }
    return count;
}

string ReverseString(string input)
{
    int len = input.length();
    cout<<len<<endl;
    string s ="";
    int i=0;int j=0;
    
    while(i<len){
        int cnt = 0;
        cnt = count(input, i);

        j=cnt;
        int k = i-1;

        while(j>=0){
            s+=input[k];
            j--;
            k--;
            if(j==0){
                s+=" ";
                i++;
            }
        }
    }
    return s;
}


int main(){
    string ans;
    getline(cin, ans);
    string output = ReverseString(ans);
    cout<<output<<endl;
}