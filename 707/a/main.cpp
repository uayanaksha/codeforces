#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n, m;
  char c;
  bool isBW = true;
  cin >> n >> m;
  for(int i{}; i < n; i++){
    for(int j{}; j < m; j++){
      cin >> c;
      if(c != 'W' && c != 'B' && c != 'G'){
        isBW = false;
      }
    }
  }
  cout << ( isBW ? "#Black&White" : "#Color" ) << endl;
  return 0;
}
