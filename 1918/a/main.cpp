#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, m;
    cin >> n >> m;
    if(m&1){
      m--;
    }
    cout << n*m/2 << endl;
  }
  return 0;
}
