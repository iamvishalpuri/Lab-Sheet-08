#include <iostream>
using namespace std;
const int MAX = 10;
int sumDiagonal(int matrix[][MAX], int size);
int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;
    int squareMatrix[MAX][MAX];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) cin >> squareMatrix[i][j];
    
    int diagonalSum = sumDiagonal(squareMatrix, n);
    cout << "Sum of diagonal: " << diagonalSum << endl;
    return 0;
}

int sumDiagonal(int matrix[][MAX], int size) {
    int total = 0;
    for (int i = 0; i < size; ++i) {
        total += matrix[i][i];
    }
    return total;
}

Output
Enter size of square matrix: 3
Enter elements:
1 2 3
4 5 6
7 8 9
Sum of diagonal: 15
