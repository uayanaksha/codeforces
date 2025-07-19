#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(void){
  int n, h, minw = 0;
  string ai;
  cin >> n >> h;
  while (getline(cin, ai, ' ')) {
   if(cin.peek() == '\n') break; 
   if (stoi(ai) > h) ++minw;
   ++minw;
  }
  cout << minw << endl;
  return 0;
}
