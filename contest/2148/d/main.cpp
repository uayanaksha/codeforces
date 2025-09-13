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
    deque<ll> odds, evens;
    ll sum_odd{}, sum_even{};
    for(int i{}; i<n; ++i){
      ll val;
      cin >> val;
      if(val%2){
        odds.push_back(val);
        sum_odd += val;
      } else {
        evens.push_back(val);
        sum_even += val;
      }
    }
    sort(odds.begin(), odds.end());
    if(odds.size() == 0){
      cout << 0 << endl;
    } else if (odds.size() == 1) {
      cout << sum_even + sum_odd << endl;
    } else {
      ll sum = sum_even;
      int n = (odds.size()+1)/2;
      for(int i{}; i<n; ++i){
        sum += odds.back(); 
        odds.pop_back();
      }
      cout << sum << endl;
    }
  }
  return 0;
}
