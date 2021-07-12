#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main() {
  /*********************************************
  Input Str: NNNEEWWSWES
  Output coordinates: 1 North
  *********************************************/
  string coordinates;
  int i;
  int xCoordinate = 0, yCoordinate = 0;

  cout << "Enter the string suggesting the shortest distance : \n";
  cin >> coordinates;

  for (i = 0; i < coordinates.length(); i++) {
    if ('N' == coordinates[i] || 'n' == coordinates[i]) {
      yCoordinate++;
    } else if ('S' == coordinates[i] || 's' == coordinates[i]) {
      yCoordinate--;
    } else if ('E' == coordinates[i] || 'e' == coordinates[i]) {
      xCoordinate++;
    } else if ('W' == coordinates[i] || 'w' == coordinates[i]) {
      xCoordinate--;
    }
  }

  if (xCoordinate > 0) {
    cout << xCoordinate << " East\n";
  }

  if (xCoordinate < 0) {
    cout << abs(xCoordinate) << " West\n";
  }

  if (yCoordinate > 0) {
    cout << yCoordinate << " North\n";
  }

  if (yCoordinate < 0) {
    cout << abs(yCoordinate) << " South\n";
  }

  return 0;
}
