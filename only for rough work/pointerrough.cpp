//What will be the output ?

#include <iostream>
using namespace std;

void increment(int **p){
  (**p)++;
}

int main(){
 int num = 10;
 int *ptr = &num;
 increment(&ptr);
 cout << num << endl;
 return 0;
}
// Options:
// 0. 10
// 1. 11
// 2. Error
// 3. None of these