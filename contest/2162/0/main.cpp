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
    int maxim = INT_MIN;
    cin >> n;
    vector<ll> mem(n);
    for(ll &i: mem){
      cin >> i;
      if(i>maxim){
        maxim = i;
      }
    }
    cout<< maxim<<endl;
  }
  return 0;
}
