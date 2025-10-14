#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    bool signal = (n % 2 == 0);
    cout << (signal ? "YES" : "NO") << endl;
    if(!signal) continue;
    const string a[2] = {"AA", "BB"};
    for(int i{1}; 2*i<=n; ++i){
      cout << a[i%2];
    } cout << endl;
  }
  return 0;
}
