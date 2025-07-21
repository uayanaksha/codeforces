#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(void){
  int n, p, pi;
  cin >> n;
  vector<bool> mem(n + 1, false);
  string canPass = "I become the guy.";
  cin >> p;
  while(p--){
    cin >> pi;
    mem.at(pi) = true;
  }
  cin >> p;
  while(p--){
    cin >> pi;
    mem.at(pi) = true;
  }
  for(int i = 1; i <= n; i++){ if( !mem.at(i) ) canPass = "Oh, my keyboard!"; }
  cout << canPass << endl;
  return 0;
}
