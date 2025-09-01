#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, x;
    cin >> n >> x;
    vector<int> mem(n);
    for(int &i: mem){
      cin >> i;
    }
    int start = 0, end = n-1;
    while(mem[start] == 0 && start <= end){
      ++start;
    }
    while(mem[end] == 0 && start <= end){
      --end;
    }
    int distance = end - start + 1;
    bool signal = distance <= x;
    cout << (signal ? "YES" : "NO") << endl;
  }
  return 0;
}
