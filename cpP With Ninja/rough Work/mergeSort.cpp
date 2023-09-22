#include<iostream>
using namespace std;


void merge(int arr[],int si,int mid,int ei)
{
    int s1=si,s2=mid+1,e1=mid,e2=ei,k=0;
    int size=ei-si+1;
    int a[size];
    while(s1<=e1 && s2<=e2)
    {
        if(arr[s1]>=arr[s2])
        {
            a[k]=arr[s2];
            s2++;
            k++;
        }
        else
        {
            a[k]=arr[s1];
            s1++;
            k++;
        }
    }
    while(s1<=e1)
    {
        a[k]=arr[s1];
        s1++;
        k++;
    }
    while(s2<=e2)
    {
        a[k]=arr[s2];
        s2++;
        k++;
    }
    k=0;
    for(int i=si;i<=ei;i++)
    {
        arr[i]=a[k];
        k++;
    }

}
void mergeSort(int arr[],int si,int ei)
{
    if(si>=ei)
    {
        return;
    }
    int mid=(si+ei)/2;
    mergeSort(arr,si,mid);
    mergeSort(arr,mid+1,ei);
    merge(arr,si,mid,ei);
}

int main()
{
    int n;
    cout<<"enter the size of Array : ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    mergeSort(a, 0, n - 1);
    // len(0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;

}