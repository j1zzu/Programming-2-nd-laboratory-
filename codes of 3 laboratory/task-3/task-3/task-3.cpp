#include<iostream>
#include<cmath>

using namespace std;
int main() {
    //подключаем вывод в консоли на русском языке
    setlocale(LC_ALL, "Russian");
    //вводим номер класса
    int _class = 0;
    cout << "Введите класс (1-4): ";
    cin >> _class;
    //выполняем проверку
    switch (_class) {
    case 1:
        cout << "В команду зелёных";
        break;
    case 2:
        cout << "В команду красных";
        break;
    case 3:
        cout << "В команду синих";
        break;
    case 4:
        cout << "В команду жёлтых";
        break;
    default:
        cout << "Неверно введён номер класса";
        break;
    }
}
