#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n, mi, ci, m{}, c{};
  cin>>n;
  while(n--){
    cin >> mi >> ci;
    if(mi > ci){
      ++m;
    }
    if(ci > mi){
      ++c;
    }
  }
  if(m == c){
    cout <<  "Friendship is magic!^^" << endl;
  } else if(m > c){
    cout <<  "Mishka" << endl;
  } else {
    cout <<  "Chris" << endl;
  }
  return 0;
}
