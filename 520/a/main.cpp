#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n;
  string s;
  array<bool, 26> mem{false};
  bool isPangram = true;
  cin >> n >> s;
  transform(s.begin(), s.end(), s.begin(),
      [](unsigned char c){ return tolower(c) ;});
  while(n--){ mem[s[n] - 'a'] = true; }
  for(int i = 0;i < 26; i++){ if(!mem[i]) isPangram = false; }
  cout << (isPangram ? "YES" : "NO") << endl;
  return 0;
}
