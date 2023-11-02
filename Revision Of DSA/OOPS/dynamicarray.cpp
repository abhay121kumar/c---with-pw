#include<iostream>
using namespace std;

class dynamicArray{
    public:
    int *data;
    int nI;
    int cap;

    dynamicArray(){
        data = new int[5];
        nI=0;
        cap = 5;
    }

    void add(int ele){
        if(nI==cap){
            int *newData = new int[2*cap];
            for(int i=0;i<cap;i++){
                newData[i] = data[i];
            }
            delete [] data;
            data = newData;
            cap = cap*2;
        }
    
        data[nI] = ele;
        nI++;
        
    }

    void print(){
        for(int i=0;i<cap;i++){
            cout<<data[i]<<" ";
        }
    }
};

int main(){
    dynamicArray a1;
    a1.add(1);
    a1.add(2);
    a1.add(3);
    a1.add(4);
    a1.add(5);
    a1.add(6);
    a1.print();
    cout<<endl;
}