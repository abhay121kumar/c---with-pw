#include<iostream>
using namespace std;
int main()
{
    char str[] = "A,B,C,D";
    cout<<str[0]<<endl;;
    char ch = 'a,b,c';
    cout<<ch<<endl;
    cout<<sizeof(ch)<<endl;//1
    return 0;
}
// pointer6.cpp: In function ‘int main()’:
// pointer6.cpp:7:15: warning: overflow in conversion from ‘int’ to ‘char’ changes value from ‘744631395’ to ‘'c'’ [-Woverflow]
// A
// c