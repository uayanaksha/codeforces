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
    cout << 1 << " ";
    for(int i=n; i>=3; --i){
      cout << i << " ";
    }
    cout << 2 << endl;
  }
  return 0;
}
