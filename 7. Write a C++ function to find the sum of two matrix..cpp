#include <iostream>
using namespace std;
const int MAX = 10;
void addMatrices(int mat1[][MAX], int mat2[][MAX], int result[][MAX], int rows, int cols);
int main() {
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;
    int matrixA[MAX][MAX], matrixB[MAX][MAX], sumMatrix[MAX][MAX];
    cout << "Enter Matrix A:\n";
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j) cin >> matrixA[i][j];
    cout << "Enter Matrix B:\n";
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j) cin >> matrixB[i][j];

    addMatrices(matrixA, matrixB, sumMatrix, rows, cols);
    cout << "Sum Matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << sumMatrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

void addMatrices(int mat1[][MAX], int mat2[][MAX], int result[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[i][j] = mat1[i][j] + mat2[i][j];
}

Output
Enter rows and columns: 2 2
Enter Matrix A:
1 2
3 4
Enter Matrix B:
5 6
7 8
Sum Matrix:
6 8 
10 12 
