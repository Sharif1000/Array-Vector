#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>a, pair<int, int>b){
  if(a.first != b.first) return a.first < b.first;
  return a.second > b.second;
}

int main(){
  vector<int>v(n);

  // How to sort a vector as ascending order
  sort(v.begin(), v.end()); // O(nlogn)

  // How to sort a vector as decending order
  sort(v.rbegin(), v.rend()); // O(nlogn)

  // How to reverse the order of a vector
  reverse(v.begin(), v.end()); // O(n)

  // How to use Comparison Function or Callback Function
  sort(v.begin(), v.end(), comp);
  
  return 0;
}
