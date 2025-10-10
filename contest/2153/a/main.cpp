#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, tmp;
    cin >> n;
    set<int> s;
    while(n--){
      cin >> tmp;
      s.insert(tmp);
    }
    cout << s.size() << endl;
  }
  return 0;
}
