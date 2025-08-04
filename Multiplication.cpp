#include <iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;

    cout << "Enter number of rows and columns for Matrix 1: ";
    cin >> rows1 >> cols1;

    cout << "Enter number of rows and columns for Matrix 2: ";
    cin >> rows2 >> cols2;

    if (cols1 != rows2) {
        cout << "Matrix multiplication is not possible. The number of columns of Matrix 1 must equal the number of rows of Matrix 2." << endl;
        return 0;
    }

    int matrix1[100][100], matrix2[100][100], product[100][100] = {0};

    cout << "Enter elements of Matrix 1 (" << rows1 << "x" << cols1 << "):" << endl;
    for (int i = 0; i < rows1; ++i)
        for (int j = 0; j < cols1; ++j)
            cin >> matrix1[i][j];

    cout << "Enter elements of Matrix 2 (" << rows2 << "x" << cols2 << "):" << endl;
    for (int i = 0; i < rows2; ++i)
        for (int j = 0; j < cols2; ++j)
            cin >> matrix2[i][j];

    for (int i = 0; i < rows1; ++i)
        for (int j = 0; j < cols2; ++j)
            for (int k = 0; k < cols1; ++k)
                product[i][j] += matrix1[i][k] * matrix2[k][j];

    cout << "\nProduct of Matrix 1 and Matrix 2 is:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j)
            cout << product[i][j] << " ";
        cout << endl;
    }

    return 0;
}

/*
Input:Enter number of rows and columns for Matrix 1: 2 3
Enter number of rows and columns for Matrix 2: 3 2
Enter elements of Matrix 1 (2x3):
1 2 3
4 5 6
Enter elements of Matrix 2 (3x2):
7 8
9 10
11 12

Output: Product of Matrix 1 and Matrix 2 is:
50 60
122 148

*/
