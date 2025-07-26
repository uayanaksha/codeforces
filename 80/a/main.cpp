#include <bits/stdc++.h>
using namespace std;
bool isPrime(int m){
  bool signal = true;
  for(int i=2; i*i <= m; i++){
    if(m % i == 0){
      signal = false;
      break;
    }
  }
  return signal;
}
int main(void){
  int n, m;
  cin >> n >> m;
  while(!isPrime(++n));
  if(n==m){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
