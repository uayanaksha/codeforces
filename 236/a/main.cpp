#include <bits/stdc++.h>
using namespace std;
int main(void){
  set<unsigned> s;
  string input;
  getline(cin, input, '\n');
  for (auto e : input){
    s.emplace(e);
  }
  string result = s.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!";
  cout << result << endl;
  return 0;
}
