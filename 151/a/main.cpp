#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  int drinkPerPerson = k * l / n;
  int drinkToastCtr = drinkPerPerson / nl;
  int limePerPerson = c * d / n;
  int saltPerPerson = p / n;
  int saltToastCtr = saltPerPerson / np;
  cout << min(limePerPerson, min(drinkToastCtr, saltToastCtr)) << endl;
  return 0;
}
