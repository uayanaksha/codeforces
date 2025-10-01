#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    vector<unsigned> mem(4);
    vector<bool> arr(4, false);
    for(unsigned &i: mem){
      cin >> i;
    }
    unsigned k = mem.front();
    for(int i{}; i<3; ++i){
      if(arr[k]) continue;
      arr[k] = true;
      k = mem[k];
    }
    bool signal = arr[1] && arr[2] && arr[3];
    cout << (signal ? "YES" : "NO") << endl;
  }
  return 0;
}
