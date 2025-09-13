#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    ll n, m, points{};
    cin >> n >> m;
    vector<pair<ll, ll>> a(n+1);
    a[0] = pair(0, 0);
    for(ll i{1}; i<=n; ++i){
      ll minute, pos;
      cin >> minute >> pos;
      a[i] = pair(minute, pos);
      ll diff_m = minute - a[i-1].first;
      bool same_pos = pos == a[i-1].second;
      bool signal = (same_pos && diff_m%2==1) || (!same_pos && diff_m%2==0);
      if(signal){
        --diff_m;
      }
      points += diff_m;
    }
    ll final_point=m;
    if(final_point != a.back().first){
      int diff_m = final_point - a.back().first;
      points += diff_m;
    }
    cout << points << endl;
  }
  return 0;
}
