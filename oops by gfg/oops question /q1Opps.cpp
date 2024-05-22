    //  Write a C++ program to implement a class called Circle 
    // that has private member variables for radius. 
    // Include member functions to calculate the circle's area 
    // and circumference.

    #include<iostream>
    using namespace std;
    // area of circle = 3.14*r*r
    //circumference of circle = 2*3.14*r;

    // This program demonstrates object-oriented programming in
    //  C++ and shows how to encapsulate data and functionality 
    // within a class.
    
    class Circle{
        private:
        double radius;
        public:
        Circle(double radius){
            this->radius = radius;
        }
        double calAreaOfCircle(){
            return 3.14*radius*radius;
        }
        double calCircumOfCircle(){
            return 2*3.14*radius;
        }

        void setRadius(double radius){
            this->radius = radius;
        }
        double getRadius(){
            return radius;
        }
    };

    int main(){
        Circle c1(2.2);
        cout<<c1.getRadius()<<endl;
        cout<<c1.calAreaOfCircle()<<endl;
        cout<<c1.calCircumOfCircle()<<endl;
        c1.setRadius(1.0);
        cout<<c1.getRadius()<<endl;
        cout<<c1.calAreaOfCircle()<<endl;
        cout<<c1.calCircumOfCircle()<<endl;
        return 0;
    }