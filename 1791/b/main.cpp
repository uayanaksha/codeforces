#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, x{}, y{};
    char c;
    bool passes = false;
    cin >> n;
    for(int i{}; i < n; i++){
      cin >> c;
      switch (c) {
        case 'R': ++x; break;
        case 'L': --x; break;
        case 'U': ++y; break;
        case 'D': --y; break;
      }
      if(x == 1 && y == 1){
        passes = true;
      }
    }
    cout << (passes ? "YES" : "NO") << endl;
  }
  return 0;
}
