#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    string s1, s2;
    cin >> s1 >> s2;
    if(s1 == s2){
      cout << "=" << endl;
      continue;
    }
    if(s2.back() < s1.back()){
      cout << "<" << endl;
    } else if(s2.back() > s1.back()){
      cout << ">" << endl;
    } else {
      switch(s1.back()){
        case 'L':
        if(s1.size() < s2.size()){
          cout << "<" << endl;
        } else {
          cout << ">" << endl;
        }
        break;
        case 'S':
        if(s1.size() > s2.size()){
          cout << "<" << endl;
        } else {
          cout << ">" << endl;
        }
        break;
      }
    }
  }
  return 0;
}
