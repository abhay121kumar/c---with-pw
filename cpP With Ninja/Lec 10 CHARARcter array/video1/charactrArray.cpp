#include<iostream>
using namespace std;

int lengthOFCharArray(char name[])
{
    int count = 0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[100];
    cout<<"Enter Name: "<<endl;
    cin>>name;
    cout<<"Name: "<<lengthOFCharArray(name)<<endl;
    return 0;
}
// int main()
// {
//     char name[100];
//     cout<<"Enter Name: "<<endl;
//     cin>>name;
//     name[4] = 'x';
//     name[3] = 'd';
//     name[1] = '\0';
//     cout<<"Name: "<<name<<endl;
//     return 0;
// }