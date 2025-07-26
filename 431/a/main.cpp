#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(void){
  vector<int> a(1, 0);
  string s;
  int ai, sum{};
  for(int i{}; i<4;i++){
    cin >> ai;
   a.push_back(ai); 
  }
  cin >> s;
  for(auto e: s){
    sum += a[e - '0'];
  }
  cout << sum << endl;
  return 0;
}
