#include <bits/stdc++.h>
#include <functional>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    sort(s.begin(), s.end(), greater<char>());
    cout << s << endl;
  }
  return 0;
}
