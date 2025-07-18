#include <bits/stdc++.h>
#include <cctype>
using namespace std;
int main(void){
  string input;
  cin >> input;
  transform(input.begin(), input.begin()+1, input.begin(), 
      [](unsigned char c){ return toupper(c);});
  cout << input << endl;
  return 0;
}
