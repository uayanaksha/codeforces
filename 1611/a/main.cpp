#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    if((s.back() - '0') % 2 == 0){
      cout << 0 << endl;
    } else if((s.front() - '0') % 2 == 0){
      cout << 1 << endl;
    } else {
      bool possible = false;
      for(char c: s){
        if((c-'0')%2==0){
          possible = true;
          break;
        }
      }
      cout << (possible ? 2 : -1) << endl;
    }
  }
  return 0;
}
