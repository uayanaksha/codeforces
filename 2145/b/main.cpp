#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, k, l{}, r{}, undefined_state_ctr{};
    string s;
    cin >> n >> k >> s;
    r = n-1;
    vector<char> mem(n, '+');
    if(k == n){
      cout << string(n, '-') << endl;
      continue;
    }
    for(int i{}; i<k; ++i){
      char c = s[i];
      if(c == '0'){
        mem[l++] = '-';
      } else if(c == '1'){
        mem[r--] = '-';
      } else {
        ++undefined_state_ctr;
      }
      if(l == r) break;
    }
    while (l<=r && undefined_state_ctr--) {
      mem[l++] = '?';
      mem[r--] = '?';
    }
    for(char c: mem){
      cout << c;
    } cout << endl;
  }
  return 0;
}
