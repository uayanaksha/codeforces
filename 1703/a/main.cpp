#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;
int main(void){
  int n;
  cin >> n;
  string s;
  while(n--){
    cin >> s;
    transform(s.begin(), s.end(), s.begin(),
        [](unsigned char c){ return tolower(c); });
    if(s == "yes"){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
