#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  pair<int, int> out{1, n};
  vector<int> mem(n);
  for(int &ai: mem){
    cin >> ai;
  }
  int min_diff = abs(mem[0] - mem[n-1]);
  for(int i{1}; i<n; ++i){
    int diff = abs(mem[i] - mem[i-1]);
    if(diff < min_diff){
      min_diff = diff;
      out.first = i;
      out.second = i+1;
    }
  }
  cout << out.first << " " << out.second << endl;
}
