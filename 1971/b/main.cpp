#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    string s, r;
    cin >> s;
    r = s;
    reverse(r.begin(), r.end());
    if(s != r){
      cout 
        << "YES" << endl
        << r << endl;
      continue;
    }
    sort(r.begin(), r.end(), greater<char>());
    if(s != r){
      cout 
        << "YES" << endl
        << r << endl;
      continue;
    }
    sort(r.begin(), r.end(), less<char>());
    if(s != r){
      cout 
        << "YES" << endl
        << r << endl;
      continue;
    }
    cout << "NO" << endl;
  }
  return 0;
}
