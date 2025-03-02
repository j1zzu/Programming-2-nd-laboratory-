#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    ifstream file("FileName.txt"); // Открываем файл для чтения
    string text; // Переменная для хранения текста из файла
    string word; // Переменная для хранения текущего слова

    // Читаем файл слово за словом
    while (file >> word) {
        // Проверка, является ли первая буква гласной
        if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u') {
            word[0] = toupper(word[0]); // Преобразуем первую букву в заглавную
        }
        text += word + " "; // Добавляем слово к тексту с пробелом
    }

    file.close(); // Закрываем файл

    // Выводим результат на экран
    cout << "Изменение регистра:\n" << text << endl;
}
