#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n, ctr = 0, c;
  string s;
  cin >> n;
  while (n--){
    cin >> s;
    c = s[0];
    if (c == 'T'){
      ctr += 4; 
    }
    if (c == 'C'){
      ctr += 6; 
    }
    if (c == 'O'){
      ctr += 8; 
    }
    if (c == 'D'){
      ctr += 12; 
    }
    if (c == 'I'){
      ctr += 20; 
    }
  }
  cout << ctr << endl;
  return 0;
}
