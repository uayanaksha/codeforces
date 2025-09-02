#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, m{}, s{};
    cin >> n;
    vector<ll> M(n), S(n);
    for(ll &i: M){
      cin >> i;
    }
    for(ll &i: S){
      cin >> i;
    }
    S.push_back(0);
    for(int i{}; i<n; ++i){
      if(M[i] > S[i+1]){
        m += M[i];
        s += S[i+1];
      }
    }
    cout << m - s << endl;
  }
  return 0;
}
