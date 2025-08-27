#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  int t;
  cin >> t;
  while(t--){
    ll n, sum{};
    cin >> n;
    vector<ll> mem(n);
    for(ll &i: mem){
      cin >> i;
      sum += i;
    }
    int div = sum / n;
    bool isPossible = true;
    sum = 0;
    for(ll &i: mem){
      i = i - div;
      if(i < 0 && sum < abs(i)){
        isPossible = false;
        break;
      } 
      sum += i;
    }
    cout << (isPossible ? "YES" : "NO") << endl;
  }
  return 0;
}
