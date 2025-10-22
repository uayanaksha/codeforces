#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, minim;
    cin >> n;
    vector<ll> mem(n);
    for(ll &i: mem){
      cin >> i;
    }
    minim = n;
    sort(mem.begin(), mem.end());
    int win = mem[0];
    for(int i=1; i<n; ++i){
      win += mem[i];
      int c = (win+1)/2 + (n-1-i);
      if(c < minim){
        minim = c;
      }
    }
    cout << minim << endl;
  }
  return 0;
}
