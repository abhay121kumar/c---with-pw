/*In normal terms, Encapsulation is defined as wrapping up data and information under a single unit. 
In Object-Oriented Programming, Encapsulation is defined as binding together the data and the functions
 that manipulate them. Consider a real-life example of encapsulation, in a company, there are different
  sections like the accounts section, finance section, sales section, etc. The finance section handles all
   the financial transactions and keeps records of all the data related to finance. Similarly, the sales 
   section handles all the sales-related activities and keeps records of all the sales. Now there may arise 
   a situation when for some reason an official from the finance section needs all the data about sales in 
   a particular month. In this case, he is not allowed to directly access the data of the sales section.
    He will first have to contact some other officer in the sales section and then request him to give the
     particular data. This is what encapsulation is. Here the data of the 
sales section and the employees that can manipulate them are wrapped under a single name “sales section”.*/
#include<iostream>
using namespace std;

class half{
    int a;
    int b;
    public:
    int fraction(int input){
        a = input;
        b = a/2;
        return b;
    }
};

int main(){
    int n;
    cin>>n;
    cout<<n<<endl;
    //We can not access any function from the class directly.
    //We need an object to access that function that is using the member variables of that class. 
    half obj1;
    // The function which we are making inside the class must use only member variables, only then
    //  it is called encapsulation.
    int ans = obj1.fraction(n);
    cout<<ans<<endl;
}