#include<iostream>
#include<cstring>
using namespace std;

// int main()
// {
//     char input[100];
//     cin>>input;
//     int len = strlen(input);
//     cout<<len<<endl;
//     return 0;
// }




// int main()
// {
//     char input1[100],input2[200];
//     cin>>input1>>input2;
//     if(strcmp(input1,input2)==0)
//     cout<<"true"<<endl;
//     else
//     cout<<"false"<<endl;
//     return 0;
// }




// int main()
// {
//     char input1[100] = "abcd";
//     char input2[100] = "efgh";

//     cout<<"Before coping"<<endl;
//     cout<<"input1 "<<input1<<endl;
//     cout<<"input2 "<<input2<<endl;

//     strcpy(input1,input2);

//     cout<<"After copying"<<endl;
//     cout<<"input1 "<<input1<<endl;
//     cout<<"input2 "<<input2<<endl;

//     strcpy(input1,"abhay");

//     cout<<"After one more time copying"<<endl;
//     cout<<"input1 "<<input1<<endl;
//     cout<<"input2 "<<input2<<endl;

//     return 0;
// }





int main()
{
    char input1[100] = "a b c d";
    char input2[100] = "e f g h";

    cout<<"Before coping"<<endl;
    cout<<"input1 "<<input1<<endl;
    cout<<"input2 "<<input2<<endl;
cout<<endl;
    strncpy(input1,input2,3);

    cout<<"After copying"<<endl;
    cout<<"input1 "<<input1<<endl;
    cout<<"input2 "<<input2<<endl;
cout<<endl;
    strncpy(input1,"abhay",2);

    cout<<"After one more time copying"<<endl;
    cout<<"input1 "<<input1<<endl;
    cout<<"input2 "<<input2<<endl;
cout<<endl;
    return 0;
}