#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

void addMatrices(const int mat1[ROWS][COLS], const int mat2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void displayMatrix(const int mat[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix1[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[ROWS][COLS] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int resultMatrix[ROWS][COLS];

    addMatrices(matrix1, matrix2, resultMatrix);

    cout << "Matrix 1:\n";
    displayMatrix(matrix1);

    cout << "\nMatrix 2:\n";
    displayMatrix(matrix2);

    cout << "\nResult Matrix:\n";
    displayMatrix(resultMatrix);

    return 0;
}
