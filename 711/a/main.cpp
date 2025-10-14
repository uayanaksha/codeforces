#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  vector<string> mem(n);
  bool found = false;
  for(string &s: mem){
    cin >> s;
    if(found) continue;
    if(s[0] == s[1] && s[0] == 'O'){
      found = true;
      s[0] = '+';
      s[1] = '+';
      continue;
    }
    if(s[3] == s[4] && s[4] == 'O'){
      found = true;
      s[3] = '+';
      s[4] = '+';
    }
  }
  cout << (found ? "YES" : "NO") << endl;
  if(found){
    for(string blk: mem){
      cout << blk << endl;
    }
  }
  return 0;
}
