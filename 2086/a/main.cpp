#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    ll n, jam_before_evaporation_K, cloudberry_K;
    cin >> n;
    jam_before_evaporation_K = 4*n;
    cloudberry_K = jam_before_evaporation_K/2;
    cout<<cloudberry_K<<endl;
  }
  return 0;
}
