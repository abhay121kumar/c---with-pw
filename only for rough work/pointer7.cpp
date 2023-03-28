#include<iostream>
using namespace std;
int main() 
{
  char st[] = "ABCD";
  for(int i = 0; st[i] != '\0'; i++) 
  {
     cout << st[i] <<endl;
     cout<< *(st)+i <<endl;
     cout<< *(i+st)<<endl;
     cout<< i[st]<<endl;
  }
  return 0;
}