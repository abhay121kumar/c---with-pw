#include <iostream>
#include <map>
#include<bits/stdc++.h>
using namespace std;

int main() {
    std::map<int, int> myMap;
    myMap[1] = 42;

    // Correct usage
    auto it = myMap.find(1);
    if (it != myMap.end()) {
        int a = it->second;  // Correct: accessing the value associated with the iterator
        std::cout << "Value: " << a << std::endl;
    }

    return 0;
}
