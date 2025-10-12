#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    vector<ll> mem(27);
    for(int j{}; j<n; ++j){
      for(char i='a'; i<'a' + k; ++i){
        cout << i;
      }
    } cout << endl;
  }
  return 0;
}
