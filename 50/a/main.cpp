#include <bits/stdc++.h>
using namespace std;
int rec(int m, int n, int row, int col){
  if ((row == m && col + 2 == n) ||
      (row + 2 == m && col == n)) return 1;
  if(row > m || col > n) return 0;
  int h, v;
  h = rec(m,n,row+2,col);
  v = rec(m,n, col, );
  return 1+max(h, v);
}

int main(void){
  int m,n;
  cin >> m >> n;
  cout << rec(m,n, 1, 1) << endl;
  return 0;
}
