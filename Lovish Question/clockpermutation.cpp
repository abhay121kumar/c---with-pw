#include <iostream>
#include <vector>
#include <map>
#include<bits/stdc++.h>
using namespace std;

int main() {
  map<int, int> myMap;
  myMap[1] = 10;
  myMap[2] = 20;
  myMap[3] = 30;

  // Create a vector of pairs to store the key-value pairs from the map.
  vector<pair<int, int>> myVector;
  for (auto it = myMap.begin(); it != myMap.end(); it++) {
    myVector.push_back(make_pair(it->first, it->second));
  }

  // Sort the vector of pairs according to the second value.
  sort(myVector.begin(), myVector.end(), [](pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
  });

  // Print the sorted key-value pairs.
  for (auto it = myVector.rbegin(); it != myVector.rend(); it++) {
    cout << it->first << " " << it->second << endl;
  }

  return 0;
}