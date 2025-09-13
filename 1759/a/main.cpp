#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    string s;
    bool signal = true;
    cin >> s;
    char c = s.back();
    do {
      if(s.back() != c){
        signal = false;
        break;
      }
      switch (s.back()) {
        case 'e': c = 'Y'; break;
        case 's': c = 'e'; break;
        case 'Y': c = 's'; break;
        default: signal = false;
      }
      s.pop_back();
    } while (!s.empty() && signal);
    cout << ( signal ? "YES" : "NO" ) << endl;
  }
  return 0;
}
