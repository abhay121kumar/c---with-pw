/*
Second Largest in array
Send Feedback
You have been given a random integer array/list(ARR) of size N. You are required to find and return the second largest element 
present in the array/list.
If N <= 1 or all the elements are same in the array/list then return -2147483648 or -2 ^ 31(It is the smallest value for the 
range of Integer)
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first line of each test case or query contains an integer 'N' representing the size of the array/list.

The second line contains 'N' single space separated integers representing the elements in the array/list.
Output Format :
For each test case, print the second largest in the array/list if exists, -2147483648 otherwise.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^5

Time Limit: 1 sec
Sample Input 1:
1
7
2 13 4 1 3 6 28
Sample Output 1:
13
Sample Input 2:
1
5
9 3 6 2 9
Sample Output 2:
6
Sample Input 3:
2
2
6 6
4
90 8 90 5
Sample Output 3:
-2147483648
8

*/

#include<iostream>
using namespace std;

/*
// wong code you have to update this 
void insertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j;
        int current = arr[i];
        for(j=i-1;j>=0;j--)
        {
            if(current<arr[j])
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1] = current;
    }
}

int SecondLargaestElement(int arr[],int n)
{
    insertionSort(arr,n);
    int i=n-1;
    while(i>0)
    {
        if(arr[i]!=arr[i-1])
        {
            return arr[i-1];
        }
        else
        {
            return -1;
        }
    }

}
*/


int SecondLargaestElement(int arr[],int n)
{
    int Largest = -1;
    int SecondLargest = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>Largest)
        {
            SecondLargest=Largest;
            Largest = arr[i];
        }
        if(arr[i]>SecondLargest && Largest!=arr[i])
        {
            SecondLargest = arr[i];
        }
    }
    return SecondLargest;
    
}

// method-2
//  int SecondLargaestElement(int arr[],int n)
//  {
//     sort(arr,arr+n);
//     return arr[n-2];
//  }

int main()
{
    int n;
    cout<<"Enter size of an array "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<SecondLargaestElement(arr,n);
    cout<<endl;
    return 0;
}