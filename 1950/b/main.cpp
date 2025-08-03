#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n;
    bool block = false;
    cin >> n;
    for(int i{}; i<n; i++){
      string s{};
      for(int j{}; j<n; j++){
        if(block){
          if(j%2==0){
            s+="..";
          } else {
            s+="##";
          }
        } else {
          if(j%2){
            s+="..";
          } else {
            s+="##";
          }
        }
      }
      cout 
        << s << endl
        << s << endl;
      block = !block;
    }
  }
  return 0;
}
