#include <iostream>
#include <string.h>

using namespace std;



struct marsh { //структуру marsh для хранения данных о маршруте. Кол-во символов в строке.
    char start[100];
    char end[100];
    unsigned int nuber;
};

void inputMarsh(marsh& a) { //ввод данных о маршрутах
    cout << "Введите начальный пункт: ";
    cin >> a.start;
    cout << "Введите конечный пункт: ";
    cin >> a.end;
    cout << "Введите номер маршрута: ";
    cin >> a.nuber;
}

void sort(marsh* a, int n) { //Cортировка массива маршрутов. Сортирует массив маршрутов a длиной n по возрастанию номеров маршрутов (nuber)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i; j++) {
            if (a[j].nuber > a[j + 1].nuber)
                swap(a[j], a[j + 1]);
        }
    }
}

void outputMarsh(marsh& a) { //Вывод информации о маршруте
    cout << "Номер маршрута: " << a.nuber << endl;
    cout << "Начальный пункт: " << a.start << endl;
    cout << "Конечный пункт: " << a.end << endl;
    cout << endl << endl;
}

void searchInform(marsh* a, int n) { //searchInform не возвращает значения (void). Поиск и обработка а, а также кол-во элементов n
    char tmp[100];
    cout << "Введите пункт, информация о котором вас интересует: ";
    cin >> tmp;
    bool _check = false; //указывает, найден ли хотя бы один маршрут, соответствующий запросу.
    for (int i = 0; i < n; i++) { //Поиск маршрутов в массиве
        if (!strcmp(a[i].end, tmp) || !strcmp(a[i].start, tmp)) { //Сравнивает строки. Если хотя бы одно из полей маршрута совпадает с tmp, условие выполняется.
            outputMarsh(a[i]); //где совпало выводит информацию о маршруте
            _check = true; //Устанавливает флаг _check в true, чтобы отметить, что маршрут был найден.
        }
    }
    if (!_check) {
        cout << "Ничего не найдено" << endl;
    }
}

int main(int argc, char* argv[])
{
    system("chcp 1251");
    static const char n = 8; //кол-во элементов массива

    marsh marsh_array[n]; //Создает массив marsh_array, содержащий n (8) элементов типа marsh. Каждый элемент представляет отдельный маршрут.

    for (int i = 0; i < n; i++) //Перебирает индексы массива. Вызывает функцию inputMarsh, запрашивая данные о маршрутах и сохраняет в marsh_array[i]
        inputMarsh(marsh_array[i]);

    sort(marsh_array, n);// сортирует массив по возрастанию
    searchInform(marsh_array, n);//позволяет пользователю искать маршруты, указав начальный или конечный пункт.

    return 0;
}
