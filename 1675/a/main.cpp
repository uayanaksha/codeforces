#include <bits/stdc++.h>
#include <pthread.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    int diffX = x>a ? x-a : 0, diffY = y>b ? y-b : 0;
    bool signal= (diffX + diffY <= c);
    cout << ( signal ? "YES" : "NO" )<< endl;
  }
  return 0;
}
