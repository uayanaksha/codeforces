#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n ,ti, minCtr = INT_MAX;
  vector<vector<int>> t(4, vector(0, 0));
  cin>>n;
  for(int i=1; i<=n; i++){
    cin>>ti;
    t.at(ti).push_back(i);
  }
  for(int i=1; i<=3; i++){
    int size = t.at(i).size();
    if( size < minCtr){
      minCtr = size;
    }
  }
  cout << minCtr << endl;
  for(int i{}; i<minCtr; i++){
    cout 
      << t.at(1).at(i) << " "
      << t.at(2).at(i) << " "
      << t.at(3).at(i)
      << endl;
  }
  return 0;
}
