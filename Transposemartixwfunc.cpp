#include <iostream>
using namespace std;

// Function to transpose a matrix
void transposeMatrix(int matrix[3][3], int transpose[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int transpose[3][3];

    // Transpose the matrix
    transposeMatrix(matrix, transpose);

    // Print the original matrix
    cout << "Original Matrix: " << endl;
    printMatrix(matrix);

    // Print the transposed matrix
    cout << "Transposed Matrix: " << endl;
    printMatrix(transpose);

    return 0;
}