#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int a[2], b[2], f[2], dist{};
    cin >> a[0] >> a[1];
    cin >> b[0] >> b[1];
    cin >> f[0] >> f[1];
    if(a[0] == b[0]){
      int minim = min(a[1], b[1]);
      int maxim = max(a[1], b[1]);
      if (a[0] == f[0] && minim < f[1] && f[1] < maxim){
        dist = 2;
      }
      dist += abs(a[1] - b[1]);
      cout << dist << endl;
      continue;
    }
    if(a[1] == b[1]){
      int minim = min(a[0], b[0]);
      int maxim = max(a[0], b[0]);
      if (a[1] == f[1] && minim < f[0] && f[0] < maxim){
        dist = 2;
      }
      dist += abs(a[0] - b[0]);
      cout << dist << endl;
      continue;
    }
    dist = abs(a[1] - b[1]) + abs(a[0] - b[0]);
    cout << dist << endl;
  }
  return 0;
}
