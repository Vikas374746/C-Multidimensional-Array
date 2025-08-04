#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows and columns of the matrix: ";
    cin >> rows >> cols;

    int matrix[100][100], transpose[100][100];

    cout << "Enter elements of the matrix (" << rows << "x" << cols << "):" << endl;
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> matrix[i][j];

    // Calculate transpose
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            transpose[j][i] = matrix[i][j];

    cout << "Transpose of the matrix is:" << endl;
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j)
            cout << transpose[i][j] << " ";
        cout << endl;
    }

    return 0;
}

/*
Enter number of rows and columns of the matrix: 2 3
Enter elements of the matrix (2x3):
1 2 3
4 5 6


Transpose of the matrix is:
1 4 
2 5 
3 6 

*/
