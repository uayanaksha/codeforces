#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(void){
  string raw, res;
  priority_queue<int> pq;
  while(getline(cin, raw, '+')){
    if (raw.contains('\n')) {
      raw.pop_back();
    }
    pq.emplace(stoi(raw));
  }
  while (!pq.empty()) {
    raw = to_string(pq.top());
    if(res == ""){
      res = raw;
    } else {
      res = raw + "+" + res;
    }
    pq.pop();
  }
  cout << res << endl;
  return 0;
}
