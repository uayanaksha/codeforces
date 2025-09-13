#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    ll n, k;
    cin >> n >> k;
    int lower_bound = n - k + 1;
    int sum = ((n*(n+1))/2) - ((lower_bound*(lower_bound-1))/2);
    cout << ( sum % 2 == 0 ? "YES" : "NO" ) << endl;
  }
  return 0;
}
