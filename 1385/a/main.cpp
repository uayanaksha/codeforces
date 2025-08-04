#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int x, y, z;
    cin >> x >> y >> z;
    array<int, 3> mem{x, y, z};
    sort(mem.begin(), mem.end());
    if(mem[2] == mem[1]){
      cout << "YES" << endl;
      cout << mem[1] << " " << mem[0] << " " << mem[0] << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
