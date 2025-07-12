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

  //How to make a copy from another vector
  vector<int> v1(5, 0);
  vector<int> v2(v1.begin(), v1.end());

  // How to sum all elements of a vector
  vector<int>v3 = {2,3,5,6,8};
  int sum = accumulate(v3.begin(),v3.end(),0);
  
  return 0;
}
