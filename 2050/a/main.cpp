#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    bool signal = false;
    int n, m, ctr{};
    cin >> n >> m;
    vector<string> mem(n);
    for(string &i: mem){
      cin >> i;
      if(signal || i.size() > m){
        signal = true;
        continue;
      }
      ++ctr;
      m -= i.size();
    }
    cout << ctr << endl;
  }
  return 0;
}
