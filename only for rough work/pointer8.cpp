#include<iostream>
using namespace std;

int f(int x, int *py, int **ppz) {
    int y, z;
    cout<<**ppz<<endl;
    **ppz += 1;
    //cout<<**ppz<<endl;
    z = **ppz;
   // cout<<z<<endl;
    *py += 2;
    y = *py;
   // cout<<y<<endl;
   // cout<<x<<endl;
    x += 3;
   // cout<<x<<endl;
    return x + y + z;
}

int main() {
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << f(c, b, a)<<endl;
    return 0;
}
