#include <iostream>
using namespace std;
int main() {
    system("chcp 1251");
    string faculty;
    int group_count;
    cout << "Введите название факультета: ";
    cin >> faculty;
    cout << "Введите число групп: ";
    cin >> group_count;
    // Динамическое выделение памяти
    string* names = new string[group_count];
    double** grades = new double* [group_count];

    for (int i = 0; i < group_count; i++) {
        grades[i] = new double[5];
    }
    for (int i = 0; i < group_count; i++) {
        cout << "Введите название для " << i + 1 << "-й группы: ";
        cin >> names[i];
    }
    cout << "Заполните данные о группах (Через пробел, процент пятерок, четверок, троек, двоек и успеваемости группы): \n";
    for (int i = 0; i < group_count; i++) {
        cout << names[i] << ' ';
        cin >> grades[i][0];
        cin >> grades[i][1];
        cin >> grades[i][2];
        cin >> grades[i][3];
        cin >> grades[i][4];
    }

    cout << "\nУспеваемость по группам факультета " << faculty << '\n';
    cout << "Группа | % пятерок | % четверок | % троек | % двоек | % успеваемости группы\n";
    for (int i = 0; i < group_count; i++)
        cout << names[i] << ' ' << grades[i][0] << ' '\
        << grades[i][1] << ' ' << grades[i][2] << ' ' \
        << grades[i][3] << ' ' << grades[i][4] << '\n';
    cout << "Средний % по факультету ";
    for (int i = 0; i < 5; i++) {
        double value = 0;
        for (int j = 0; j < group_count; j++)
            value += grades[j][i];
        cout << value / group_count << ' ';
    }
    return 0;
}
