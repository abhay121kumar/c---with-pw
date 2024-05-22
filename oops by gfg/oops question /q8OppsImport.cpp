// Write a C++ program to implement a class called Date that has 
// private member variables for day, month, and year. Include 
// member functions to set and get these variables, as well as
//  to validate if the date is valid.


#include<iostream>
using namespace std;
#include<bits/stdc++.h>


class Date{
    private:
    int day,month,year;

    bool isLeapYear(int year) const{
        if(year%4==0){
            if(year%100 == 0){
                if(year%400 == 0){
                    return true;
                }else{
                    return false;
                }
            }else{
                return true;
            }
        }else{
            return false;
        }
    }
    int getDaysInMonth(int month,int year) const{
        switch(month){
            case 1:return 31;
            case 2:isLeapYear(year)?29:28;
            case 3:return 31;
            case 4:return 30;
            case 5:return 31;
            case 6:return 30;
            case 7:return 31;
            case 8:return 31;
            case 9:return 30;
            case 10:return 31;
            case 11:return 30;
            case 12:return 31;
        }
        return 0;
    }

    public:
    Date(){}
    Date(int day,int month,int year){
        this->day = day;
        this->month = month;
        this->year = year;
    }
    bool isValidDate(int day,int month,int year) const{
        if(day<1 || month<1 || year<2000 || month>12){
            return false;
        }
        int dayInMonth = getDaysInMonth(month,year);
        if(day>dayInMonth)return false;
        return true;
    }
    void setDate(int day,int month,int year){
        if(isValidDate(day,month,year)){
            this->day = day;
            this->month = month;
            this->year = year;
        }else{
            cout<<"Invalid date provided "<<endl;
        }
    }
    int getDay() const{
        return day;
    }
    int getMonth() const{
        return month;
    }
    int getYear() const{
        return year;
    }

    void displayDate(){
        cout<<day<<" "<<month<<" "<<year<<endl;
    }

};

int main(){
    Date d1(2,27,2002);
    d1.displayDate();
    Date d2;
    //month wrong
    d2.setDate(2,31,2002);
    d2.displayDate();
    //day wrong
    d2.setDate(32,12,2002);
    d2.displayDate();
    //year wrong
    d2.setDate(31,12,1000);
    d2.displayDate();
    return 0;
}



/*
#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

    // Helper function to check if a year is a leap year
    bool isLeapYear(int year) const {
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    return true;
                } else {
                    return false;
                }
            } else {
                return true;
            }
        } else {
            return false;
        }
    }

    // Helper function to get the number of days in a month
    int getDaysInMonth(int month, int year) const {
        switch (month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                return 31;
            case 4: case 6: case 9: case 11:
                return 30;
            case 2:
                return isLeapYear(year) ? 29 : 28;
            default:
                return 0;
        }
    }

public:
    // Default constructor
    Date() : day(1), month(1), year(2000) {}

    // Constructor to initialize the date
    Date(int day, int month, int year) {
        setDate(day, month, year);
    }

    // Setter for date
    void setDate(int day, int month, int year) {
        if (isValidDate(day, month, year)) {
            this->day = day;
            this->month = month;
            this->year = year;
        } else {
            cout << "Invalid date provided!" << endl;
        }
    }

    // Getter for day
    int getDay() const {
        return day;
    }

    // Getter for month
    int getMonth() const {
        return month;
    }

    // Getter for year
    int getYear() const {
        return year;
    }

    // Function to check if the date is valid
    bool isValidDate(int day, int month, int year) const {
        if (year < 1 || month < 1 || month > 12 || day < 1) {
            return false;
        }
        int daysInMonth = getDaysInMonth(month, year);
        if (day > daysInMonth) {
            return false;
        }
        return true;
    }

    // Function to display the date
    void displayDate() const {
        cout << (day < 10 ? "0" : "") << day << "/"
             << (month < 10 ? "0" : "") << month << "/"
             << year << endl;
    }
};

int main() {
    // Create a Date object with valid date
    Date date1(29, 2, 2020);
    cout << "Date 1: ";
    date1.displayDate();

    // Attempt to create a Date object with an invalid date
    Date date2;
    date2.setDate(31, 4, 2021);
    cout << "Date 2: ";
    date2.displayDate(); // Should display "Invalid date provided!" and default date

    // Set a valid date for date2
    date2.setDate(30, 4, 2021);
    cout << "Date 2 after setting a valid date: ";
    date2.displayDate();

    return 0;
}

*/