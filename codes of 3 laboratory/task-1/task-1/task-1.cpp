#include<iostream>
#include<cmath>

int main() {
    //подключаем вывод в консоли на русском языке
    setlocale(LC_ALL, "Russian");
    //инициализируем переменную
    float userNum = 0;
    std::cout << "Введите число: ";
    //вводим значение переменной
    std::cin >> userNum;
    //выполняем проверку и выводим результат
    std::cout << "Введённое число ";
    if (userNum < 0) {
        std::cout << "отрицательное";
    }
    else if (userNum > 0) {
        std::cout << "положительное ";
    }
    else {
        std::cout << "равно нулю";
    }
}
