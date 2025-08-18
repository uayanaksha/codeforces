#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n, ai, minim=INT_MAX;
  cin >> n;
  while(n--){
    cin >> ai;
    if(abs(ai) > minim) continue;
    minim = abs(ai);
  }
  cout << minim << endl;
  return 0;
}
