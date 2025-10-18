#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  vector<pair<int, string>> mem = {
    pair(0, "chest"),
    pair(0, "biceps"),
    pair(0, "back")
  };
  for(int i{}; i<n; ++i){
    int x;
    cin >> x;
    mem[i%3].first += x;
  }
  sort(mem.begin(), mem.end());
  cout << mem.back().second << endl;
  return 0;
}
