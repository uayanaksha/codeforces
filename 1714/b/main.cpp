#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, val, moves;
    cin >> n;
    vector<bool> mem(200001, false);
    queue<int> q;
    for(int i{}; i<n; ++i){
      cin >> val;
      if(!mem[val]){
        mem[val] = true;
      } else {
        while(q.front() != val){
          mem[q.front()] = false;
          q.pop();
        }
        q.pop();
      }
      q.push(val);
    }
    moves = n - q.size();
    cout << moves << endl;
  }
  return 0;
}
