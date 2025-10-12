#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, x, y, time;
    cin >> n >> x >> y;
    if(x<y){
      time = (n + x-1)/x;
    } else {
      time = (n + y-1)/y;
    }
    cout << time << endl;
  }
  return 0;
}
