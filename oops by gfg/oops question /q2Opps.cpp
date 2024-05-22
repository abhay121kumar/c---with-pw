// Write a C++ program to create a class called Rectangle
//  that has private member variables for length and width. 
// Implement member functions to calculate the rectangle's area
//  and perimeter.

#include<iostream>
using namespace std;
//area of rectangle = l*b
// perimeter of rectangle = 2*(l+b)

// This program demonstrates the encapsulation of data and methods
//  within a class in C++, as well as how to interact with 
// class objects through member functions.

class Rectangle{
    private:
    double length,width;
    public:
    Rectangle(){}
    Rectangle(double length,double width){
        this->length = length;
        this->width = width;
    }
    double calAreaOfRectangle() const{
        return length*width;
    }
    double calPerimeterOfRectangle() const{
        return 2*(length+width);
    }

    void setLength(double length){
        this->length = length;
    }
    void setWidth(double width){
        this->width = width;
    }

    double getLength() const{
        return length;
    }
    double getWidth() const{
        return width;
    }
};

int main(){
    Rectangle r1(2.2,1.1);
    cout<<r1.getLength()<<endl;
    cout<<r1.getWidth()<<endl;
    cout<<r1.calAreaOfRectangle()<<endl;
    cout<<r1.calPerimeterOfRectangle()<<endl;
    Rectangle r2;
    r2.setLength(1.0);
    r2.setWidth(2.0);
    cout<<r2.getLength()<<endl;
    cout<<r2.getWidth()<<endl;
    cout<<r2.calAreaOfRectangle()<<endl;
    cout<<r2.calPerimeterOfRectangle()<<endl;
    return 0;
}