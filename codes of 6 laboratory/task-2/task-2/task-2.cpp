#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    ifstream file("input.txt"); // Открываем файл для чтения
    string maxSentence; // Переменная для хранения предложения с максимальным количеством знаков пунктуации
    int maxpunctuatCount = 0; // Максимальное количество знаков пунктуации
    string currentSentence; // Текущее предложение
    int punctuatCount = 0; // Количество знаков пунктуации в текущем предложении
    char ch; // Хранение одного символа
    string text;

    // Чтение текста посимвольно
    while (file.get(ch)) {
        currentSentence += ch; // Добавляем символ к текущему предложению

        // Проверка, является ли символ знаком пунктуации
        if (ch == '.' || ch == ',' || ch == '!' || ch == '?' || ch == ':' || ch == ';' || ch == '-' || ch == '"') {
            punctuatCount += 1;
        }

        // Проверка знака препинания в конце предложения
        if (ch == '.' || ch == '!' || ch == '?') {
            // Сравниваем количество знаков пунктуации
            if (punctuatCount > maxpunctuatCount) {
                maxpunctuatCount = punctuatCount;
                maxSentence = currentSentence;
            }

            // Обнуление предложения и счётчика
            text += currentSentence;
            currentSentence = "";
            punctuatCount = 0;
        }
    }

    file.close();
    cout << "Полный текст: " << text << endl;

    cout << "\nПредложение с максимальным количеством знаков пунктуации:\n" << maxSentence << endl;

}
