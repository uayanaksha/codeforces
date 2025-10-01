#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, m, k, H, ai, ctr{};
    cin >> n >> m >> k >> H;
    --m;
    int max_diff = m*k;
    while(n--){
      cin >> ai;
      if(H == ai) continue;
      int diff = abs(H - ai);
      if(max_diff >= diff && diff%k==0){
        ++ctr;
      }
    }
    cout << ctr << endl;
  }
  return 0;
}
