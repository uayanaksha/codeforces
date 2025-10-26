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
    vector<ll> v( k+1, 0);
    ll sum{}; 
    for(int i{}; i<k; ++i){
      ll b, c;
      cin >> b >> c;
      v[b] += c;
      sum += c;
    }
    sort(v.begin(), v.end(), greater<int>());
    while(v.size() > n){
      sum -= v.back();
      v.pop_back();
    }
    cout << sum << endl;
  }
  return 0;
}
