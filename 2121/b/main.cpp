#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n;
    string s;
    cin >> n >> s;
    bool signal = n >= 3;
    if(signal){
      signal = false;
      vector<bool> mem(26, false);
      if(s.front() == s.back()){
        s.pop_back();
      }
      for(char c: s){
        if(mem[c - 'a']){
          signal = true;
          break;
        } else {
          mem[c-'a'] = true;
        }
      }
    }
    cout << (signal ? "YES" : "NO") << endl;
  }
  return 0;
}
