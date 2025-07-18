#include <iostream>
using namespace std;
int main(void){
  int row, col, input, result;
  for (int i = 1; i < 6; i++) {
    for (int j = 1; j < 6; j++) {
      cin >> input;
      if (input == 1) {
        row = i;
        col = j;
      }
    }
  }
  result = abs(row-3) + abs(col-3);
  cout << result << endl;
  return 0;
}
