#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, ctr_1{}, ctr_0{};
  string s;
  cin >> n >> s;
  for(char c: s){
    if(c == 'z'){
      ++ctr_0;
    }
    if(c == 'n'){
      ++ctr_1;
    }
  }
  while(ctr_1--){
    cout << 1 << " ";
  }
  while(ctr_0--){
    cout << 0 << " ";
  } cout << endl;
  return 0;
}
