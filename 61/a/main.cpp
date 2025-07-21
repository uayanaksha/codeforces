#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(void){
  string s1, s2, ans;
  cin >> s1 >> s2;
  auto p1 = s1.begin(), p2 = s2.begin();
  while (*p1 && *p2) {
    if(*p1 == *p2){ ans += '0'; } 
    else { ans += '1'; }
    p1++, p2++;
  }
  cout << ans << endl;
  return 0; 
}
