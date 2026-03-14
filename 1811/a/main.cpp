#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

void solve(){
  int n, i=0;
  char d;
  string s;
  cin >> n >> d >> s;
  while(i<n && s[i] >= d){
    ++i;
  }
  string r = s.substr(0, i) + d + s.substr(i);
  cout << r << endl;
}

int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
