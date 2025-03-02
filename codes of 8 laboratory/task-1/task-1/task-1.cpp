#include <iostream>
using namespace std;

double addition_negative(double massive[], int row) {
    double addition = 0;
    for (int i = 0; i < row; i++) {
        if (massive[i] < 0) {
            addition += massive[i];
        }
    }
    return addition;
}

int main() {
    const int row = 4;
    double massive[row] = { -1.2, 4.5, -3.6, 9.3 };
    cout << addition_negative(massive, row);
}
