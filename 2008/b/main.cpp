#include <bits/stdc++.h>
using namespace std;
using ll = long long;
string create_square(int n){
  if(n < 1)  return "";
  if(n == 1) return "1";
  if(n == 2) return "1111";
  string s{""};
  for(int i{}; i<n; ++i){
    s += '1';
  }
  for(int j{}; j<n-2; ++j){
    for(int i{1}; i<=n; ++i){
      if(i == 1 || i == n){
        s += '1';
      } else {
        s += '0';
      }
    }
  }
  for(int i{}; i<n; ++i){
    s += '1';
  }
  return s;
}
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n;
    string s;
    cin >> n >> s;
    int sq = sqrt(n);
    if (sq*sq != n){
      cout << "NO" << endl;
      continue;
    }
    bool signal = create_square(sq) == s;
    cout << ( signal ? "YES" : "NO" ) << endl;
  }
  return 0;
}
