#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t, ai, max;
  cin >> t;
  while(t--){
    vector<int> s;
    for(int i{}; i<4; i++){
      cin >> ai;
      s.push_back(ai);
    }
    if(s[0] > s[2] || s[1] > s[3]){
      swap(s[0], s[2]);
      swap(s[1], s[3]);
    }
    if(s[0] > s[1]){
      swap(s[0], s[1]);
    }
    if(s[2] > s[3]){
      swap(s[2], s[3]);
    }
    if(s[2] > s[1]){
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
  return 0;
}
