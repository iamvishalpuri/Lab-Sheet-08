#include <iostream>
using namespace std;

int diagonalSum(int matrix[][10], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += matrix[i][i];
    return sum;
}

int main() {
    int n, mat[10][10];
    cout << "Enter size (n x n): "; 
    cin >> n;
    cout << "Enter matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> mat[i][j];
    cout << "Diagonal sum = " << diagonalSum(mat, n) << endl;
    return 0;
}

Output
Enter size(n x n) : 3
Enter matrix :
1 2 3
4 5 6
7 8 9
Diagonal sum = 15