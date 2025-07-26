#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    string s;
    int n, start{}, end{};
    cin >> n >> s;
    end = n-1;
    while(start < end){
      if(s[start] == s[end]) break;
      ++start;
      --end;
    }
    cout << end - start + 1 << endl;
  }
  return 0;
}
