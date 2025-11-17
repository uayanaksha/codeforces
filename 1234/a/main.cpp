#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, sum{};
    cin >> n;
    vector<int> mem(n);
    for(int &i: mem){
      cin >> i;
      sum += i;
    }
    cout << (sum+n-1)/n << endl;
  }
  return 0;
}
