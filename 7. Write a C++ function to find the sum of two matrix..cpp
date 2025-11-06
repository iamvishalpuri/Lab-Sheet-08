#include <iostream>
using namespace std;

void matrixSum(int a[][10], int b[][10], int result[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = a[i][j] + b[i][j];
}

int main() {
    int r, c, m1[10][10], m2[10][10], sum[10][10];
    cout << "Enter rows and cols: ";
    cin >> r >> c;
    cout << "Enter matrix 1:\n";
    for (int i = 0; i < r; i++){
    for (int j = 0; j < c; j++)
        cin >> m1[i][j];
}
    cout << "Enter matrix 2:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cin >> m2[i][j];
    }
    matrixSum(m1, m2, sum, r, c);
    cout << "Sum:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) 
            cout << sum[i][j] << " ";
        cout << endl;
    }
    return 0;
}

Output
Enter rows and cols: 2 2
Enter matrix 1 :
1 2
3 4
Enter matrix 2 :
5 6
7 8
Sum :
6 8
10 12