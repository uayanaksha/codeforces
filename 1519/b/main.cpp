#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, m, k;
    cin >> n >> m >> k;
    int sum=n*m - 1;
    bool signal = (sum == k);
    cout << ( signal ? "YES" : "NO" ) << endl;
  }
  return 0;
}
