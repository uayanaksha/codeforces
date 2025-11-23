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
    int n, x, y, _4{}, _8{};
    cin >> n >> x >> y >> s;
    x = abs(x), y = abs(y);
    for(char c: s) (c == '4' ? ++_4 : ++_8);
    if(x <= _8 && y <= _8) {
      cout << "YES" << endl;
      continue;
    }
    if(x > _4+_8 && y > _4+_8) {
      cout << "NO" << endl;
      continue;
    }
    bool signal = false;
    for(int _x = _8, _y = _8+_4; _y>=_8; _x++, _y--){
      if(x <= _x && y <= _y){
        signal = true;
        break;
      }
    }
    cout << (signal ? "YES" : "NO") << endl;
  }
  return 0;
}
