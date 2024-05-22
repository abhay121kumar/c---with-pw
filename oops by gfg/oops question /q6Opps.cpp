// Write a C++ program to create a class called Triangle that
//  has private member variables for the lengths of its three 
// sides. Implement member functions to determine if the 
// triangle is equilateral, isosceles, or scalene.

// l1,l2,l3
//equi,iso,scal

#include<iostream>
using namespace std;
#include<bits/stdc++.h>

class Triangle{
    private:
    int s1,s2,s3;
    public:
    Triangle(){}
    Triangle(int s1,int s2,int s3){
        this->s1 = s1;
        this->s2 = s2;
        this->s3 = s3;
    }
    // void setS1(int s1){
    //     this->s1 = s1;
    // }
    // void setS2(int s2){
    //     this->s2 = s2;
    // }
    // void setS3(int s3){
    //     this->s3 = s3;
    // }
    // int getS1() const{
    //     return s1;
    // }
    // int getS2() const{
    //     return s2;
    // }
    // int getS3() const{
    //     return s3;
    // }
    // void calTriangle(){
    //     if(s1==s2==s3){
    //         cout<<"Equilateral Triangle"<<endl;
    //     }else if((s1==s2)||(s2==s3)||(s1==s3)){
    //         cout<<"Isosceles Triangle "<<endl;
    //     }else{
    //         cout<<"Scalene Triangle"<<endl;
    //     }
    // }
    // m-2
    bool isEqui() const{
        return (s1==s2 && s1==s3 && s2==s3);
    }
    bool isIsose() const{
        return ((s1==s2) || (s2==s3) || (s3==s1));
    }
    bool isSce() const{
        return ((s1!=s2) && (s2!=s3) && (s3!=s1));
    }

    void display(){
        if(isEqui()){
            cout<<"Equilateral Triangle"<<endl;
        }
        else if(isIsose()){
            cout<<"Isosceles Triangle "<<endl;
        }
        else if(isSce()){
            cout<<"Scalene Triangle "<<endl;
        }else{
            cout<<"Invalid Triangle "<<endl;
        }
    }
};

int main(){
    // Triangle t1(2,3,1);
    // t1.calTriangle();
    // Triangle t2;
    // t2.setS1(5);
    // t2.setS2(4);
    // t2.setS3(5);
    // t2.calTriangle();
    //m-2
    Triangle t1(2,2,1);
    Triangle t2(2,2,2);
    Triangle t3(3,2,1);
    t1.display();
    t2.display();
    t3.display();
    return 0;
}