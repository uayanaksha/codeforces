// https://codeforces.com/problemset/problem/71/A
#include <bits/stdc++.h>
using namespace std;
int main(){
  unsigned n;
  cin >> n;
  vector<string> v;
  for(int i{}; i < n; i++){
    string s;
    cin >> s;
    v.insert(v.end(), s);
  }
  for (auto e : v) {
    string result;
    if(e.length() > 10){
      result = e[0] + to_string(e.length()-2) + e[e.length()-1];
    } else {
      result = e;
    }
    cout << result << endl;
  }
  puts("");
  return 0;
}
