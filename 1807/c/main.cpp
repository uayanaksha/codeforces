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
    bool signal = true;
    cin >> n >> s;
    vector<int> mem, mem2(26, -1);
    for(int i{}; i<n; ++i){
      mem.push_back(i%2);
    }
    for(int i{}; i<n; ++i){
      char c = s[i];
      if(mem2[c-'a'] < 0){
        mem2[c-'a'] = mem[i];
      } else if (mem2[c-'a'] != mem[i]) {
        signal = false;
      }
    }
    cout << (signal ? "YES" : "NO") << endl;
  }
  return 0;
}
