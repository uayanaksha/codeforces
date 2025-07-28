#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, k, ai, bi, sum{};
    vector<int> a, b;
    cin >> n >> k;
    for(int i{}; i<n; i++){
      cin >> ai;
      a.push_back(ai);
      sum += ai;
    }
    for(int i{}; i<n; i++){
      cin >> bi;
      b.push_back(bi);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
    for(int i{}; i < k; i++){
      if (sum - a[i] + b[i] > sum) {
        sum = sum - a[i] + b[i];
      }
    }
    cout << sum << endl;
  }
  return 0;
}
