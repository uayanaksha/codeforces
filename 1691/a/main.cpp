#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, tmp, ctr_odd{}, ctr_even{};
    cin >> n;
    while(n--){
      cin >> tmp;
      if(tmp&1){
        ++ctr_odd;
      } else {
        ++ctr_even;
      }
    }
    cout << min(ctr_even, ctr_odd) << endl;
  }
  return 0;
}
