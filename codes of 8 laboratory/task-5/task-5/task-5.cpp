#include <iostream>
#include <cmath>
using namespace std;

int min_parallel_addition(int matrix[4][4], int row, int col) {
    int min_addition = INT_MAX;
    for (int side = -(row - 2); side < row - 2; side++) { // Смещение по диагонали от побочной
        int addition = 0;

        for (int i = 0; i < row; i++) {
            int j = (col - 1) - i + side;
            if (j >= 0 && j < col) { // Если в диагонали больше нет чисел
                addition += abs(matrix[i][j]);
            }
        }

        if (addition < min_addition) {
            min_addition = addition;
        }
    }
    return min_addition;
}

void output_of_matrix(int matrix[4][4], int row, int col) {
    cout << "Матрица: \n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";

        }
        cout << endl;
    }
}
int main() {
    setlocale(LC_ALL, "Rus");
    const int row = 4;
    const int col = 4;
    int matrix[row][col] = { {1,10,3,4},{5,0,7,8},{9,10,11,12},{13,14,15,16} };
    output_of_matrix(matrix, row, col);
    cout << "Минимальная сумма диагонали, параллельной побочной: " << min_parallel_addition(matrix, row, col);


}
