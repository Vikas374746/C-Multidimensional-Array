#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows and columns of the matrix: ";
    cin >> rows >> cols;

    if (rows != cols) {
        cout << "Diagonal addition is only possible for square matrices." << endl;
        return 0;
    }

    int matrix[100][100];
    int diagonal_sum = 0;

    cout << "Enter elements of the matrix (" << rows << "x" << cols << "):" << endl;
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> matrix[i][j];

    for (int i = 0; i < rows; ++i) {
        diagonal_sum += matrix[i][i]; // Adding main diagonal element
    }

    cout << "Diagonal sum (main diagonal): " << diagonal_sum << endl;

    int anti_diagonal_sum = 0;
    for (int i = 0; i < rows; ++i) {
        anti_diagonal_sum += matrix[i][cols - i - 1]; // Adding anti-diagonal element
    }

    cout << "Anti-diagonal sum: " << anti_diagonal_sum << endl;

    return 0;
}

/*
Input:Enter number of rows and columns of the matrix: 3 3
Enter elements of the matrix (3x3):
1 2 3
4 5 6
7 8 9

Output:Diagonal sum (main diagonal): 15
Anti-diagonal sum: 15

*/
