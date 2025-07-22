#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(void){
  int n, m, toRight = 1;
  cin >> n >> m;
  vector<vector<char>> table;
  for(int i{}; i<n; i++){
    if(i % 2) {
      table.push_back(vector(m, '.'));
    } else {
      table.push_back(vector(m, '#'));
    }
  }
  for(int i = 1; i<n; i+=2){
    if(i/2 % 2) {
      table[i][0] = '#';
    } else {
      table[i][m-1] = '#';
    }
  }
  for(auto row: table){
    for(auto cell: row){
      cout << cell;
    } cout << endl;
  }

  return 0;
}
