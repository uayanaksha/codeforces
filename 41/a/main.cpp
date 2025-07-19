#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(void){
  string s, t;
  cin >> s >> t;
  if(s.size() != t.size()) {
    cout << "NO" << endl;
    return 0;
  }
  reverse(s.begin(), s.end());
  if (s.compare(t) == 0){
    cout << "YES" << endl;
  } else cout << "NO" << endl;
  return 0;
}
