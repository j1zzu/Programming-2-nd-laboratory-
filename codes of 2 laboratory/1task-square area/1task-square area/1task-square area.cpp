#include<iostream>
#include<cmath>

int main() {
    setlocale(LC_ALL, "Russian");
    //a - сторона квадрата, S - площадь квадрата
    int a, S;
    std::cout << "Введите сторону квадрата: \na = ";
    std::cin >> a;

    S = pow(a, 2);
    std::cout << "Площадь квадрата со сторонами " << a << " равна " << S << std::endl;
}
