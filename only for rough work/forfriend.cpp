#include<iostream>
using  namespace std;


int power(int a, int b){

    cin>> a >> b ;

    int ans=1;

    for (int i = 1 ; i <=b; i++)
    {
        ans = ans * a;
    }
    
    return ans;

}
int main(int argc, char const *argv[])
{
    int a,b;

    int answer = power(a,b);

    cout<< answer << endl;


    return 0;
}
