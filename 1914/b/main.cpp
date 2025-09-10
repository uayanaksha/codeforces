#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    for(int i=n-k; i<=n; ++i){
      cout << i << " ";
    }
    for(int i{n-k-1}; i>0 ; --i){
      cout << i << " ";
    }
    cout << endl;
  }
  return 0;
}
