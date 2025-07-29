#include <bits/stdc++.h>
using namespace std;
int main(void){
  string s;
  unsigned curr, sum{};
  cin >> s;
  s = "a" + s;
  for(int i{1}; i<s.size(); i++){
    curr = abs(s[i] - s[i-1]);
    if(curr > 13){
      curr = 26 - curr;
    }
    sum += curr;
  }
  cout << sum << endl;
  return 0;
}
