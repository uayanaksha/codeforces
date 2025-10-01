#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    ll n, ops_ctr{}, range_ctr{}, sum{}, ai;
    cin >> n;
    while(n--){
      cin >> ai;
      if(ai==0 && range_ctr>0){
        range_ctr++;
        continue;
      }
      if(ai<0){
        range_ctr++;
      } else {
        if(range_ctr>0){
          ops_ctr++;
          range_ctr=0;
        }
      }
      sum += abs(ai);
    }
    if(range_ctr>0){
      ops_ctr++;
    }
    cout<<sum<<" "<<ops_ctr<<endl;
  }
  return 0;
}
