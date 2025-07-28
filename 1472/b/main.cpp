#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, size, ai, sum{};
    vector<int> mem(3, 0);
    cin >> n;
    size = n;
    while(n--){
      cin >> ai;
      mem[ai]++;
      sum += ai;
    }
    if(mem[1] == 0 && mem[2] == 0){
      cout << "NO" << endl;
    } else if(mem[1] % 2 == 0 && mem[2] % 2 == 0){
      cout << "YES" << endl;
    } else if(mem[1]%2 == 1){
      cout << "NO" << endl;
    } else if(mem[1]%2 == 0){
      if(mem[2]%2==0){
        cout << "YES" << endl;
      } else {
        if(mem[1] >= 2){
          cout << "YES" << endl;
        } else {
          cout << "NO" << endl;
        }
      }
    }
  }
  return 0;
}
