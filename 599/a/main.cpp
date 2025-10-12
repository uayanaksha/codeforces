#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int d1, d2, d3, distance;
  cin >> d1 >> d2 >> d3;
  int arr[] = {
    2*(d1 + d2),
    2*(d1 + d3),
    2*(d2 + d3),
    d1 + d2 + d3
  };
  distance = arr[0];
  for(int i{1}; i<4; ++i){
    if(arr[i] < distance){
      distance = arr[i];
    }
  }
  cout << distance << endl;
  return 0;
}
