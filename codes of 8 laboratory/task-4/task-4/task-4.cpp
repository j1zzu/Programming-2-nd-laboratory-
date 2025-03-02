#include <iostream>
using namespace std;

void cols_matrix(int massive[4][4], int row, int col) {
    int addition = 0;
    int new_massive[] = { 0 };
    for (int j = 0; j < col; j++) {
        for (int i = 0; i < row; i++) {
            if (massive[i][j] > 0) {
                addition += massive[i][j];
            }
            else {
                addition = 0;
                break;
            }
        }
        if (addition != 0) {
            cout << "Сумма столбца номер " << j + 1 << endl << addition << " " << endl;
            addition = 0;
        }

    }
}

void output_of_matrix(int massive[4][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << massive[i][j] << " ";

        }
        cout << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Rus");
    const int row = 4;
    const int col = 4;
    int massive[row][col] = { {1,2,3,-4}, {5,-6,7,8}, {3,1,1,2}, {1,-1,1,1} };
    cout << "Матрица: \n";
    output_of_matrix(massive, row, col);
    cout << "\nCуммы элементов в тех столбцах, которые не имеют отрицательные значения: \n";
    cols_matrix(massive, row, col);
}
