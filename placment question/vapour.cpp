// #include<iostream>
// using namespace std;
// #include<vector>

// int maximum(vector<int> vaporRate){
//     int answer=0;
//     for(int i=0;i<vaporRate.size();i++){
//         int count=0;
//         for(int j=i+1;j<vaporRate.size()-1;j++){
//             count = vaporRate[i]*vaporRate[j];
//             if(count>answer){
//                 answer = count;
//             }
//         }
//         int k=2;
//         while(k%vaporRate.size()==0 && k<vaporRate.size()){

//         }
//         // for(int i=0;i<vaporRate.size()/2;i++){
//         //     int count=0;
//         //     for(int j=i+1;j<(vaporRate.size()-1)/2;j++){
//         //         count = vaporRate[i]*vaporRate[j];
//         //         if(count>answer){
//         //             answer = count;
//         //         }
//         //     }
//         //     k=i;
//         // }
//         // for(int i=k;i<vaporRate.size();i++){
//         //     int count=0;
//         //     for(int j=i+1;j<(vaporRate.size()-1);j++){
//         //         count = vaporRate[i]*vaporRate[j];
//         //         if(count>answer){
//         //             answer = count;
//         //         }
//         //     }
//         }
//     }
//     return answer;
// }

// int main(){
//     int size;
//     cin>>size;
//     vector<int> vaporRate;
//     for(int i=0;i<size;i++){
//         int temp;
//         cin>>temp;
//         vaporRate.push_back(temp);
//     }

//     int result = maximum(vaporRate);
//     cout<<result<<endl;
//     return 0;
// }













#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// int main() {
//     int num;
//     cin >> num;

//     vector<int> vaporRates(num);

//     for (int i = 0; i < num; ++i) {
//         cin >> vaporRates[i];
//     }

//     sort(vaporRates.begin(), vaporRates.end(), greater<int>());

//     int maxVaporRate = 0;

//     for (int i = 0; i < num / 2; ++i) {
//         int reversedIndex = num - 1 - i;
//         maxVaporRate += (vaporRates[i] * vaporRates[reversedIndex]);
//     }

//     cout << maxVaporRate << endl;

//     return 0;
// }

int isTraingle(Point *P1, Point *P2, Point *P3){
    
}