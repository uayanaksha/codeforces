#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, max_diff=INT_MIN;
    cin >> n;
    vector<ll> mem(n);
    for(ll &i: mem){
      cin >> i;
    }
    sort(mem.begin(), mem.end());
    for(int i{}; i<n; i+=2){
      ll diff = mem[i+1] - mem[i];
      if(diff > max_diff) {
        max_diff = diff;
      }
    }
    cout << max_diff << endl;
  }
  return 0;
}
