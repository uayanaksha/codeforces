#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai;
    vector<int> mem;
    cin >> n;
    for(int i{}; i<n; i++){
      cin >> ai;
      mem.push_back(n-ai+1);
    }
    for(int e:mem){
      cout << e << " ";
    } cout << endl;
  }
  return 0;
}
