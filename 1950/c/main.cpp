#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int hh, mm;
    string ampm;
    char c;
    cin >> hh >> c >> mm;
    if(hh >= 0 && hh < 12){
      ampm = "AM";
    } else {
      ampm = "PM";
    }
    if(hh > 12){
      hh = hh%12;
    }
    if(hh == 0){ 
      hh = 12;
    }
    cout 
      << setfill('0') << setw(2) << hh 
      << c 
      << setfill('0') << setw(2) << mm 
      << " " << ampm << endl;
  }
  return 0;
}
