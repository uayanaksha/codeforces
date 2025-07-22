#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(void){
  int n, hi, ai, ctr{};
  cin >> n;
  vector<int> memHi(100+1, 0), memAi;
  while(n--){
    cin >> hi >> ai;
    memHi[hi]++;
    memAi.push_back(ai);
  }
  for(auto ai: memAi){
    ctr += memHi[ai];
  }
  cout << ctr << endl;
  return 0;
}
