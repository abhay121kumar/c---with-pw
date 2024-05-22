// Write a C++ program to implement a class called Student that 
// has private member variables for name, class, roll number, 
// and marks. Include member functions to calculate the grade 
// based on the marks and display the student's information.

#include<iostream>
using namespace std;
#include<bits/stdc++.h>

class Student{
    private:
    char student_name[30];
    string class_name;
    int student_rollNumber;
    double student_marks;

    string calGrade() const{
        if(student_marks>90){
            return "A+";
        }else if(student_marks>80){
            return "A";
        }else if(student_marks>70){
            return "B+";
        }else if(student_marks>60){
            return "B";
        }else if(student_marks>50){
            return "C+";
        }else if(student_marks>40){
            return "C";
        }else if(student_marks>30){
            return "D";
        }else{
            return "F";
        }
    }

    public:
    void setName(const char* student_name){
        strncpy(this->student_name,student_name,sizeof(this->student_name)-1);
        this->student_name[sizeof(this->student_name)-1] = '\0';
    }
    void setClassName(const string class_name){
        this->class_name = class_name;
    }
    void setRollNumber(int student_rollNumber){
        this->student_rollNumber = student_rollNumber;
    }
    void setMarks(double student_marks){
        this->student_marks = student_marks;
    }
    const char* getName()const{
        return student_name;
    }
    const string getClassName(){
        return class_name;
    }
    int getRollNumber() const{
        return student_rollNumber;
    }
    double getMarks() const{
        return student_marks;
    }

    void displayStudentInfo() const{
        cout<<student_name<<endl;
        cout<<class_name<<endl;
        cout<<student_rollNumber<<endl;
        cout<<student_marks<<endl;
        cout<<calGrade()<<endl;
    }
};

int main(){
    Student student1;
    student1.setName("Pooja Kumari");
    student1.setClassName("12th Grade");
    student1.setRollNumber(54321);
    student1.setMarks(92.0);
    cout << "\nUpdated Student 1 Information:" << endl;
    student1.displayStudentInfo();
    return 0;
}
