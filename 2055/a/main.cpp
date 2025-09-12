#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, a, b;
    cin >> n >> a >> b;
    int spaceA = abs(a-b-1);
    cout << (spaceA % 2 ? "YES" : "NO") << endl;
  }
  return 0;
}
