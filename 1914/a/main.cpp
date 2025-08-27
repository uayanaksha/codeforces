#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ctr{};
    string s;
    vector<int> mem(26, 0);
    cin >> n >> s;
    for(char c:s){
      int i = c - 'A';
      ++mem[i];
    }
    for(int i{}; i<mem.size(); i++){
      if(mem[i] <= i) continue;
      ++ctr;
    }
    cout << ctr << endl;
  }
  return 0;
}
