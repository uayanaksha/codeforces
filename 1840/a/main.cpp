#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, start = 0, end;
    string s, res;
    cin >> n >> s;
    while(start < n-1){
      char c = s[start];
      end = start+1;
      while(s[end] != c){
        end++;
      }
      res += c;
      start = end + 1;
    }
    cout << res << endl;
  }
  return 0;
}
