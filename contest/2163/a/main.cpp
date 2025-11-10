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
    vector<ll> mem(n);
    for(ll &i: mem){
      cin >> i;
    }
    sort(mem.begin(), mem.end());
    bool sig = true;
    for(int i=1; i<n-1; i+=2){
      if(mem[i] < mem[i+1]) sig = false;
    }
    cout << (sig ? "YES" : "NO") << endl;
  }
  return 0;
}
