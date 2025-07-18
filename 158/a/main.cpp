#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n, k, input;
  vector<int> v(1, 0);
  cin >> n >> k;
  while(true){
    cin >> input;
    v.push_back(input);
    if (cin.peek() == '\n') break;
  }
  int result = k;
  if (v[result] > 0){
    if(v[v.size() - 1] == v[result]) result = n;
    else {
      while(v.at(result) == v.at(result+1)){
        ++result;
      }
    }
  } else {
    if(v[1] < 1) result = 0;
    else {
      while(v.at(result) < 1){
        --result;
      }
    }
  }
  cout << result << endl;
}
