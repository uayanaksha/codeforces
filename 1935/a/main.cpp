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
    string r(s.begin(), s.end());
    reverse(r.begin(), r.end());
    cout << min(s, r+s) << endl;
  }
  return 0;
}
