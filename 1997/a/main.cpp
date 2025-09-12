#include <bits/stdc++.h>
using namespace std;
using ll = long long;
char newc(char c){
  if(c == 'z'){
    return 'a';
  }
  return char(c+1);
}
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int duplicate = -1;
    string s;
    cin >> s;
    unsigned n = s.size();
    for(int i=1; i<n; ++i){
      if(s[i] == s[i-1]){
        duplicate = i;
        break;
      }
    }
    if(duplicate<0){
      char c = newc(s.back());
      cout << s << c << endl;
    } else {
      char c = newc(s.at(duplicate));
      cout 
        << s.substr(0, duplicate)
        << c 
        << s.substr(duplicate, s.size() - duplicate)
        << endl;
    }
  }
  return 0;
}
