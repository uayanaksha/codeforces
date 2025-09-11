#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n;
    string s;
    cin >> n >> s;
    vector<int> mem(256, 0);
    for(char c: s){
      if(mem[c] == n) continue;
      ++mem[c];
    }
    int sum = mem['A'] + mem['B'] + mem['C'] + mem['D'];
    cout << sum << endl;
  }
  return 0;
}
