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
    bool signal = is_sorted(s.begin(), s.end());
    cout << (signal ? "YES" : "NO") << endl;
  }
  return 0;
}
