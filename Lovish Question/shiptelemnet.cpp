#include<iostream>
#include<cstring>
using namespace std;






int InsertShift(int arr[], int sfrom, int eTo,int item){
     for(int i = eTo; i>sfrom; i--){
          arr[i] = arr[i-1];
     }
     arr[sfrom] = item;
     return eTo+1;
}

int main() {
	int arr[50] = {4,6,8,9};
	int small = InsertShift(arr,2,4,1);
	for(int i =0; i<small; i++){
	     cout<<arr[i]<<" ";
	}
    cout<<endl;
	
	return 0;
}








// void shift(int arr[], int n){
//     int i=0;
//     while(arr[i+2]!=0){
//         arr[i+1] = arr[i];
//         i++;
//     }
//     arr[0] = n;
//     for(int i=0; i<4; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main()
// {
//     int a[50] = {1,2,3};
//     int n;
//     cin>>n;
//     shift(a, n);
//     return 0;
// }


