#include <iostream>
#include <string>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    string date;
    string date_piece;
    string months[] = { "Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь" };
    cout << "Введите дату (формата MM/DD/YY): "; cin >> date;
    for (int i = 0; i < date.length(); i++) {
        if (i == 2) {
            if (stoi(date_piece) < 13) {
                cout << *(months + stoi(date_piece) - 1) << ' ';
            }
            else {
                cout << "\nНеправильно введен месяц.";
                return 1;
            }
            date_piece = "";
            continue;
        }
        else if (i == 5) {
            if (stoi(date_piece) < 32) {
                cout << date_piece << ", ";
            }
            else {
                cout << "\nНеправильно введен день.";
                return 2;
            }
            date_piece = "";
            continue;
        }
        else if (i == 7) {
            date_piece += date[i];
            cout << stoi(date_piece) + 2000;
            break;
        }
        date_piece += date[i];
    }
    return 0;
}
