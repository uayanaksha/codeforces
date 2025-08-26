#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n, ptr{1};
    string s, t;
    cin >> n >> s;
    for(int i{1}, ptr{}; ptr<n; ++i){
      ptr += i;
      t += s[ptr - 1];
    }
    cout << t << endl;
  return 0;
}
