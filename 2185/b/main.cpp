#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, tmp, maxim{}, res{};
    cin >> n;
    for(int i{}; i<n; ++i){
      cin >> tmp;
      maxim = max(maxim, tmp);
    }
    cout << maxim*n << endl;
  }
  return 0;
}
