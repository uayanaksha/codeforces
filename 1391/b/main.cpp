#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, m, ctr{};
    cin >> n >> m;
    vector<string> mem(n);
    for(string &s: mem){
      cin >> s;
      if(s.back() == 'R') {
        ++ctr;
      }
    }
    for(char c: mem.back()){
      if(c == 'D') {
        ++ctr;
      }
    }
    cout << ctr << endl;
  }
  return 0;
}
