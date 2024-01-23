/*
Given an array and two numbers M and K. We need to find the max sum of sums of M subarrays of size K (non-overlapping) in the array. (Order of array remains unchanged). K is the size of subarrays and M is the count of subarray. It may be assumed that size of array is more than m*k. If total array size is not multiple of k, then we can take partial last array.

Examples :
Input: N = 7, M = 3, K = 1
       arr[] = {2, 10, 7, 18, 5, 33, 0};
Output: 61
Explanation: subsets are: 33, 18, 10 (3 subsets of size 1)

Input: N = 4, M = 2, K = 2
       arr[] = {3, 2, 100, 1};
Output:  106
Explanation: subsets are: (3, 2), (100, 1) 2 subsets of size 2
*/
//wrong code
#include <bits/stdc++.h>
using namespace std;

int sumsubarr(vector<int> &arr, int n, int m, int k)
{
    int temp = k;
    int count = 0;
    int i = 0;
    while (m > 0)
    {
        if (temp > 0)
        {
            count += arr[i];
            temp -= 1;
            i++;
        }
        if (temp == 0 && m > 0)
        {
            temp = k;
            m -= 1;
        }
    }
    return count;
}
int main()
{
    int n = 5, m = 2, k = 2;
    vector<int> arr = {3, 2, 100, 1,4};
    sort(arr.rbegin(), arr.rend());
    cout << sumsubarr(arr, n, m, k) << endl;
}