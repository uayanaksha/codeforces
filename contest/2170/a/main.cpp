#include <bits/stdc++.h>
#include <numeric>
#include <ostream>
#include <vector>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    if(n == 1) {
      cout << 1 << endl; continue;
    }
    if(n == 2) {
      cout << 9 << endl; continue;
    }
    vector<vector<int>> v(n, vector<int>(n));
    int x=1;
    for(auto &e: v){
      iota(e.begin(), e.end(), x);
      x += n;
    }
    int maxim = 0;
    for(int i{}; i<n; ++i){
      for(int j{}; j<n; ++j){
        int sum = v[i][j];
        if(i-1>=0) sum += v[i-1][j];
        if(i+1<n) sum += v[i+1][j];
        if(j-1>=0) sum += v[i][j-1];
        if(j+1<n) sum += v[i][j+1];
        maxim = max(sum, maxim);
      }
    }
    cout << maxim << endl;
  }
  return 0;
}
