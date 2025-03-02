#include<iostream>
#include<cmath>

using namespace std;
int main() {
    //подключаем вывод в консоли на русском языке
    setlocale(LC_ALL, "Russian");
    //инициализируем массив и сумму элементов массива:
    int Arr[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int Sum = 0, i = 0;

    //находим текущую сумму
    do {
        cout << "Текущий элемент массива: ";
        cout << Arr[i] << "; ";

        Sum += Arr[i];
        cout << "Текущая сумма: ";
        cout << Sum << endl;
        i++;
    } while (Sum < 32 && i < 10);
}
