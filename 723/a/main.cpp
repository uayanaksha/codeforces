#include <bits/stdc++.h>
using namespace std;
int main(void){
  int x[3], tmp;
  cin >> x[0] >> x[1] >> x[2];
  for(int i = 0; i < 3; i++){
    for(int j = i; j < 3; j++){
      if(x[i] > x[j]){
        tmp = x[i];
        x[i] = x[j];
        x[j] = tmp;
      }
    }
  }
  cout << abs(x[1]-x[0]) + abs(x[2] - x[1]) << endl;
  return 0;
}
