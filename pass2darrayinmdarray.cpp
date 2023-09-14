#include <iostream>

using namespace std;

int main() {
  // Declaration
  int multidimensionalArray[3][3][3];

  // Declaration of 2D array
  int array2D[3][3] = { { 0, 1, 2 }, { 3, 4, 5 }, { 6, 7, 8 } };

  // Pass
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      multidimensionalArray[i][j][0] = array2D[i][j];
    }
  }

  // Printing multidimensional......
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        cout << multidimensionalArray[i][j][k] << "  " ;
      }
      cout << endl;
    }
  }

  return 0;
}