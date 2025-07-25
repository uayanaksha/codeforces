#include <bits/stdc++.h>
using namespace std;
bool isComposite(int n){
  for(int i = 2; i*i <= n; i++) {
    if(n%i == 0) {
      cout << i << endl;
      return true;
    }
  }
  return false;
}
int main(void){
  int n, ctr1, ctr2;
  cin >> n;
  if (n%2 == 0){
    ctr1 = (n/2) - 1, ctr2 = (n/2) + 1;
  } else {
    ctr1 = n/2, ctr2 = (n/2) + 1;
  }
  while(!isComposite(ctr1) || !isComposite(ctr2)){
    ctr1--;
    ctr2++;
  }
  cout << ctr1 << " " << ctr2 << endl;
  return 0;
}
