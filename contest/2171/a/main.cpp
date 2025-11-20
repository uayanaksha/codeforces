#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int helper(int n){
  if(n&1) return 0;
  int cw = n/4, ck = n/2;
  if(n >=4) ++cw;
  return cw == 0 ? ck : cw;
}
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    cout << helper(n) << endl;
  }
  return 0;
}
