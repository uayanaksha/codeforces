#include <bits/stdc++.h>
using namespace std;
void getDivision(int rating){
  if (1900 <= rating) {
    cout << "Division 1";
  }
  else if (1600<= rating && rating <= 1899) {
    cout << "Division 2";
  }
  else if (1400 <= rating && rating <= 1599) {
    cout << "Division 3";
  }
  else {
    cout << "Division 4";
  } cout << endl;
}
int main(void){
  int t, rating;
  cin >> t;
  while(t--){
    cin >> rating;
    getDivision(rating);
  }
  return 0;
}
