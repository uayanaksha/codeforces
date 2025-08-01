#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n, ctr{};
  cin >> n;
  for(int tl{1}; tl<n; tl++){
    int memCtr = n/tl-1;
    if(tl*(memCtr + 1) == n) {
      ++ctr;
    }
  }
  cout << ctr << endl;
  return 0;
}
