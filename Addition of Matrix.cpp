#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int matrix1[100][100], matrix2[100][100], sum[100][100];

    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
            cin >> matrix1[i][j];

    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
            cin >> matrix2[i][j];

    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
            sum[i][j] = matrix1[i][j] + matrix2[i][j];

    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j)
            cout << sum[i][j] << " ";
        cout << endl;
    }

    return 0;
}


/*
Input:2 3
1 2 3
4 5 6
7 8 9
1 1 1

Output:
8 10 12
5 6 7
*/
