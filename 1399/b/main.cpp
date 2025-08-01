#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    long long n, ai, bi, minA = INT_MAX, minB = INT_MAX, moves{};
    vector<int> a, b;
    cin >> n;
    for(int i{}; i<n; i++){
      cin >> ai;
      a.push_back(ai);
      if(ai < minA){ minA = ai; }
    }
    for(int i{}; i<n; i++){
      cin >> bi;
      b.push_back(bi);
      if(bi < minB){ minB = bi; }
    }
    for(int i{}; i<n; i++){
      moves += max(a[i] - minA, b[i] - minB);
    }
    cout << moves << endl;
  }
  return 0;
}
