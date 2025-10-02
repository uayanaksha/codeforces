#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    ll n, mem1_max=INT_MIN, mem2_max=INT_MIN;
    cin >> n;
    vector<ll> mem1(n);
    for(ll &i: mem1){
      cin >> i;
    }
    for(int i{}; i<n; ++i){
      ll ai;
      cin >> ai;
      if(ai > mem1[i]){
        swap(ai, mem1[i]);
      }
      if(mem1[i]>mem1_max){
        mem1_max = mem1[i];
      }
      if(ai>mem2_max){
        mem2_max = ai;
      }
    }
    cout << mem1_max * mem2_max << endl;
  }
  return 0;
}
