#include <iostream>

using namespace std;

int main() {
  /*********************************
  1
  11
  111
  1001
  11111
  100001
  *********************************/
  int numOfRows, currentRow = 1, i;

  cout << "Enter number of rows of pattern to get printed\n";
  cin >> numOfRows;

  while (currentRow <= numOfRows) {
    if (0 == currentRow % 2) {
      for (i = 0; i < currentRow; i++) {
        if (0 == i || i == currentRow - 1) {
          cout << 1;
        } else {
          cout << 0;
        }
      }
    } else {
      for (i = 0; i < currentRow; i++) {
        cout << 1;
      }
    }

    cout << "\n";
    currentRow++;
  }

  return 0;
}
