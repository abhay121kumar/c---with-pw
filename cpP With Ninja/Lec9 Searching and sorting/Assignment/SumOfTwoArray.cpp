/*
Sum of Two Arrays
Send Feedback
Two random integer arrays/lists have been given as ARR1 and ARR2 of size N and M respectively. Both the arrays/lists contain 
numbers from 0 to 9(i.e. single digit integer is present at every index). The idea here is to represent each array/list as 
an integer in itself of digits N and M.
You need to find the sum of both the input arrays/list treating them as two integers and put the result in another array/list
 i.e. output array/list will also contain only single digit at every index.
Note:
The sizes N and M can be different. 

Output array/list(of all 0s) has been provided as a function argument. Its size will always be one more than the size of the
 bigger array/list. Place 0 at the 0th index if there is no carry. 

No need to print the elements of the output array/list.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the first array/list.

Second line contains 'N' single space separated integers representing the elements of the first array/list.

Third line contains an integer 'M' representing the size of the second array/list.

Fourth line contains 'M' single space separated integers representing the elements of the second array/list.
Output Format :
For each test case, print the required sum of the arrays/list in a row, separated by a single space.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
0 <= M <= 10^5
Time Limit: 1 sec 
Sample Input 1:
1
3
6 2 4
3
7 5 6
Sample Output 1:
1 3 8 0
Sample Input 2:
2
3
8 5 2
2
1 3
4
9 7 6 1
3
4 5 9
Sample Output 2:
0 8 6 5
1 0 2 2 0 

*/

#include<iostream>
#include<string>
using namespace std;


string addStrings(string num1, string num2) 
{
    if(num1.length()<num2.length())
    swap(num1,num2);
    int i=num1.length()-1,j=num2.length()-1,x,y,carry=0;
    while(i>=0 && j>=0)
    {
        x = num1[i] - 48;
        y = num2[j] - 48;
        x = x + y + carry;
        num1[i] = x%10 + 48;
        carry = x/10;
        i--;
        j--;
    }
    while(i>=0 && carry==1)
    {
        x = num1[i] - 48;
        x = x + carry;
        num1[i] = x%10 + 48;
        carry = x/10;
        i--;
    }
    if(carry)
    num1 = '1' + num1;
    return num1;
}
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    string obj = addStrings(str1,str2);
    cout<<obj<<endl;
    return 0;
}







// my method
/*
int shift(int arr3[],int l)
{
    for(int i=0;i<l-1;i++)
    {
        arr3[i] = arr3[i+1];
    }
    return l-1;
}
int SumOfTwoArray(int arr1[],int arr2[],int n,int m,int arr3[],int l)
{
    int p=n-1;
    int q=m-1;
    int k=l-1;
    int temp1 = 0;
    int temp2 = 0;
    int temp3 = 0;
    int small = l;
    while(p>=0 && q>=0)
    {
        temp1 = arr1[p] + arr2[q] + temp3;
        temp2 = temp1%10;
        temp3 = temp1/10;
        arr3[k] = temp2;
        p--;
        q--;
        k--;
    }
    if(q<0 && temp3!=0)
    {
        while(p>=0)
        {
        temp1 = arr1[p]+temp3;
        temp2 = temp1%10;
        temp3 = temp1/10;
        arr3[k] = temp2;
        p--;
        k--;
        }
        if(p==-1 && q==-1 && k==0 && temp3==0)
        {
            small = shift(arr3,l);
        }
        else
        {
           while(p>0)
           {
                arr3[k] = arr1[p]+temp3;
                k--;
                p--;
           }
            if(p==0)
            {
                arr3[k] = temp3;
                k--;
                p--;
            }
            if(k==0 && temp3==1)
            {
                arr3[k] = temp3;
                k--;
            }
        }
        
    }
    else if(p<0 && temp3!=0)
    {
        while(q>=0)
        {
        temp1 = arr2[q]+temp3;
        temp2 = temp1%10;
        temp3 = temp1/10;
        arr3[k] = temp2;
        q--;
        k--;
        }
        if(p==-1 && q==-1 && k==0 && temp3==0)
        {
            // arr3[k] = 0;
            small = shift(arr3,l);
        }
        else
        {
           
           while(q>0)
           {
                arr3[k] = arr2[q]+temp3;
                k--;
                q--;
           }
            if(q==0)
            {
                arr3[k] = temp3;
                k--;
                q--;
            }
            if(k==0 && temp3==1)
            {
                arr3[k] = temp3;
                k--;
            }
        }
        
    }
    else if(q<0 && temp3==0)
    {
        while(p>=0 && temp3==0)
        {
            arr3[k] = arr1[p]+temp3;
            k--;
            p--;
        }
        if(k==0)
        {
            arr3[k] = 0;
            small = shift(arr3,l);
        }
    } 
    else if(p<0 && temp3==0)
    {
        while(q>=0 && temp3==0)
        {
            arr3[k] = arr2[q]+temp3;
            k--;
            q--;
        }
        if(k==0)
        {
            arr3[k] = 0;
            small = shift(arr3,l);
        }
    }
    return small; 
}
int main()
{
    int n,m,l;
    cout<<"Size of arr1 :"<<endl;
    cin>>n;
    cout<<"Size of arr2 :"<<endl;
    cin>>m;
    if(n>=m)
    l=n+1;
    else
    l=m+1;
    int arr1[n];
    int arr2[m];
    int arr3[l];
    cout<<"Enter element of arr1:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter element of arr2:"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    int smallCal = SumOfTwoArray(arr1,arr2,n,m,arr3,l);
    for(int i=0;i<smallCal;i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    return 0;
}

*/

// suraj code
/*
int * sumofArray( int * arr, int n, int * arr2, int n2){
	int * ans;
	
	int end1 = n-1;
	int end2 = n2-1;
	int k = 0;
	int data = 0;
	string value = "";
	
	while(end1 >= 0 && end2 >= 0){
	    
		data+=arr[end1]+arr2[end2];
		if(data/10 != 0){
			// cout<<to_string(data%10);
			value = to_string(data%10)+value;
		}else{
			value = to_string(data)+value;
		}
		
		data = data/10;
		end1--;
		end2--;
	}
	
	int size = end1 >= 0 ? end1 : end2;
	
	while(size >= 0 || data != 0){
		
		if(size<0 && data !=0){
			value = to_string(data)+value;
		}else if(size == end1){
			data+=arr[size];
			if(data/10 != 0){
				value = to_string(data%10)+value;
			}else{
				value = to_string(data)+value;
			}
			end1--;
		}else{
			data+=arr2[size];
			if(data/10 != 0){
				value = to_string(data%10)+value;
			}else{
				value = to_string(data)+value;
			}
		}
		size--;
		data/=10;
	}
	
	cout<<"This is the String : "<<value<<endl;
	return ans;
}

int main(){
	int n;
	cout<<"Enter the size of array One : ";
	cin>> n;
	int n2;
	cout<<"Enter the size of array Two : ";
	cin>> n2;
	
	int arr[n], arr2[n2];
	for(int i =0; i<n; i++){
		cin>>arr[i];
	}
	
	for(int i =0; i<n2; i++){
		cin>>arr2[i];
	}
		
	int * ans = sumofArray(arr, n, arr2, n2);
	return 0;
	
}
*/