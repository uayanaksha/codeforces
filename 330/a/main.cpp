#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int r, c;
  cin >> r >> c;
  vector<vector<char>> mem(r, vector<char>(c));
  for(vector<char> &blk: mem){
    for(char &c: blk){
      cin >> c;
    }
  }

  vector<bool> slr(r, false), slc(c, false);

  for(int i{}; i<r; ++i){
    bool signal = true;
    for(int j{}; j<c; ++j){
      if(mem[i][j] == 'S'){
        slr[i] = true;
        slc[j] = true;
      }
    }
  }

  int evilr{}, evilc{};
  for(int i{}; i<r; ++i){
    if(slr[i]) evilr++;
  }

  for(int i{}; i<c; ++i){
    if(slc[i]) evilc++;
  }

  int selected = r*c - evilc*evilr;
  cout << selected << endl;
  return 0;
}
