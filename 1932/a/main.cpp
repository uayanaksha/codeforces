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
    int n, ctr{};
    string s;
    cin >> n >> s;
    for(int i{}; i<n; ++i){
      if(s[i]=='@'){
        ++ctr;
      }
      if(i == 0){
        continue;
      }
      if(s[i-1]=='*' && s[i] == '*'){
        break;
      }
    }
    cout << ctr << endl;
  }
  return 0;
}
