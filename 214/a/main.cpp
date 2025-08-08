#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n, m, ctr{};
  cin >> n >> m;
  for(int a=0; a*a<=n; a++){
    int a2 = a*a;
    int b = n - a2;
    if(b*b == m - a){
      ctr++;
    }
  }
  cout << ctr << endl;
  return 0;
}
