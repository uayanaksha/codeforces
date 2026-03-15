#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int solve(){
  int n;
  cin >> n;
  deque<int> mem(n), v;
  for(auto& i: mem){
    cin >> i;
  }
  while(mem.size() > 0 && mem.front() == 0){
    mem.pop_front();
  }
  while(mem.size() > 0 && mem.back() == 0){
    mem.pop_back();
  }
  n = mem.size();
  for(int i{}; i<n;){
    int ctr{};
    while(i<n && mem[i] == 0){
      ctr++;
      ++i;
    }
    if(ctr) v.push_back(ctr);
    while(i<n && mem[i] == 1){
      ++i;
    }
  }
  int sum{};
  for(int i{}; i<v.size(); ++i){
    sum += v[i];
  }
  return sum;
}

int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int r = solve();
    cout << r << '\n';
  }
  return 0;
}
