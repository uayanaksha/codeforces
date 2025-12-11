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
    vector<ll> v, mem(n);
    int maxim_ptr=0;
    for(int i{}; i<n; ++i){
      cin >> mem[i];
      if(v.empty()){
        v.push_back(mem[i]);
      } else {
        if(mem[i] >= v.back()){
          v.push_back(mem[i]);
        }
      }
    }
    cout << n - v.size() << endl;
  }
  return 0;
}
