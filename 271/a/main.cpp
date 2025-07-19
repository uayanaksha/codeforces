#include <bits/stdc++.h>
using namespace std;
bool ifBeautifulYear(int y){
  bool isBeautifulYear = true;
  vector<bool> mem(10,false);
  int digit;
  while(y){
    digit = y % 10;
    if (!mem.at(digit)) mem.at(digit) = true;
    else {
      isBeautifulYear = false;
      break;
    }
    y /= 10;
  }
  return isBeautifulYear;
}
int main(void){
  int y, ctr;
  cin >> y;
  ctr = y;
  while (!ifBeautifulYear(++y)) ;
  cout << y << endl;
  return 0;
}
