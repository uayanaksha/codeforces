#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int k;
  vector<int> v({1, 1});
  cin >> k;
  for(int i=2; i<k; ++i){
    v.push_back(v[i-1] + v[i-2]);
  }
  cout << accumulate(v.begin(), v.begin()+k, 0) << endl;
  return 0;
}
