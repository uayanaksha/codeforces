#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, k, tmp{}, ctr{};
    cin >> n >> k;
    vector<ll> a(n+1);
    for(ll i{}; i<n; ++i){
      cin >> tmp;
      a[tmp]++;
    }
    int x=0, y=a[k];
    for(ll i{}; i<k; ++i){
      if(!a[i]){ 
        x++; 
      }
    }
    cout << max(x, y) << endl;
  }
  return 0;
}
