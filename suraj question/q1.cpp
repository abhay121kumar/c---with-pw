// write a program that takes a character as input and prints either 1,0 or -1 according to the following rules.
// 1, if the character is an uppercase alphabet(A-Z)
// 0, if the character is a lowercase alphabet(a-z)
// -1, if the character is not an alphabet


#include<iostream>
using namespace std;
int main()
{
     char ch;
     cin>>ch;
     // method -1
    //  if(ch>='A' && ch<='Z')
    //  {
    //     cout<<1<<endl;
    //  }
    //  else if(ch>='a' && ch<='z')
    //  {
    //     cout<<0<<endl;
    //  }
    //  else
    //  {
    //     cout<<-1<<endl;
    //  }

    //method-2

    if(islower(ch))
    {
        cout<<0<<endl;
    }
    else if(isupper(ch))
    {
        cout<<1<<endl;
    }
    else{
        cout<<-1<<endl;
    }

     return 0;
}