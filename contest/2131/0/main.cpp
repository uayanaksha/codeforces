#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai, bi, maxIters{};
    vector<int> a, b;
    cin >> n;
    for(int i{}; i<n; i++){
      cin >> ai;
      a.push_back(ai);
    }
    for(int i{}; i<n; i++){
      cin >> bi;
      b.push_back(bi);
    }
    int ctr{1};
    bool decrease = true;
    while(decrease){
      decrease = false;
      for(int i{}; i<n; i++){
        if(a[i] > b[i]){
          ctr++;
          a[i]--;
          decrease = true;
        }
        if(a[i] < b[i]){
          a[i]++;
        }
      }
    }
    cout << ctr << endl;
  }
  return 0;
}
