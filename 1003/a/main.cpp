#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  vector<int> mem(101, 0);
  while(n--){
    int x;
    cin >> x;
    mem[x]++;
  }
  int maxim = 0;
  for(int i: mem){
    maxim = max(i, maxim);
  }
  cout << maxim << endl;
  return 0;
}
