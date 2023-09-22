// #include<iostream>
// using namespace std;

//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        int index = 0;
        // int n = sizeof(arr)/sizeof(int);
        int minNum=arr[0];
        
        if(l>=k)
        {
            return 0;
        }
        
        for(int i=1;i<=r;i++)
        {
            minNum = min(arr[i],minNum);
            
        }
        
        if(l==(k-1))
        {
            cout<<minNum<<endl;
            return minNum;
        }
        
        for(int i=0;i<=r;i++)
        {
            if(minNum==arr[i])
            {
                index = i;
                break;
            }
            
        }
        
        for(int p=index;p<r-1;p++)
        {
            arr[p]=arr[p+1];
        }

        int ans =  kthSmallest(arr,l+1,r,k);
        return ans;
    }
};

//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends
// int main()
// {
//     // int n;
//     // cin>>n;
//     int arr[6] = {1,2,3,4,5,6};
//     int n = sizeof(arr)/sizeof(int);
//     cout<<n<<endl;
//     arr-1;
//     int k = sizeof(arr)/sizeof(int);
//     cout<<k<<endl;
//     return 0;
// }