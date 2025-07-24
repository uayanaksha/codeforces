#include <bits/stdc++.h>
using namespace std;
int main(void){
  int a, b, minima, maxima;
  cin >> a >> b;
  minima = min(a, b);
  maxima = max(a, b);
  cout << minima << " " << (maxima - minima) / 2 << endl;
  return 0;
}
